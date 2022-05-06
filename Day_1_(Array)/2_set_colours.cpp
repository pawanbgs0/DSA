/*Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function. */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        vector<int> count(3, 0);
        int j = 0;
        
        for (int i = 0; i < nums.size(); i++)
        {
            count[nums[i]]++;
        }
        
        for (int i = 0; i < count[0]; i++)
        {
            nums[j++] = 0;
        }
        
        for (int i = 0; i < count[1]; i++)
        {
            nums[j++] = 1;
        }
        
        for (int i = 0; i < count[2]; i++)
        {
            nums[j++] = 2;
        }
    }
};