//Find the Duplicate Number

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {   
        vector<int> count(nums.size() + 1, 0);
        
        for (int i = 0; i < nums.size(); i++)
        {
            count[nums[i]]++;
        }
        
        for (int i = 0; i < count.size(); i++)
        {
            if (count[i] > 1)
                return i;
        }
        return -1;
    }
};