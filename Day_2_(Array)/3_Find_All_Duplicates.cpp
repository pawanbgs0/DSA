/* Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant extra space.*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        /* unordered_map<int, pair<int, bool>> resmap;  (with O(n) time and space)
        vector<int> res;
        
        for (int i = 0; i < nums.size(); i++)
        {
            resmap[nums[i]].first = 0;
        }
        
        for (int i = 0; i < nums.size(); i++)
        {
            resmap[nums[i]].first++;
        }
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (resmap[nums[i]].first > 1 && !resmap[nums[i]].second)
            {
                res.push_back(nums[i]);
                resmap[nums[i]].second = true;
            } 
        }
        
        return res; */
        
        vector<int> res;
        sort(nums.begin(), nums.end()); // with (O(nlogn) time and O(1) space)
        
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
                res.push_back(nums[i]);
        }
        
        return res;
    }
};