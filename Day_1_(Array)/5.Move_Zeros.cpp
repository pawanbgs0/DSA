/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int i = 0, j = 0;
        
        if (nums.size() == 0)
            return;
        
        for (int k = 0; k < nums.size(); k++)
        {
            if (nums[k] == 0)
            {
                i = k;
                break;
            } 
        }
        
        for (int k = 0; k < nums.size(); k++)
        {
            if (k > i && nums[k] != 0)
            {
                j = k;
                break;
            } 
        }
        
        while (j < nums.size() && i < nums.size())
        {
            while (j < nums.size() && nums[j] == 0)
            {
                j++;
            }
            
            while (i < nums.size() && nums[i] != 0)
            {
                i++;
            }
            
            if (j < nums.size() && i < nums.size() && j > i)
                swap(nums[i], nums[j]);
            
            else 
                j++;
        }
    }
};