/*Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        int start = 0, low = 1, high = nums.size() - 1;
        vector<int> midres(3);
        vector<vector<int>> res;
        
        if (nums.size() < 3)
            return res;
        
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size() - 2; i++)
        {
            if (i == 0 || (i > 0 && nums[i] != nums[i - 1]))
            {
                low = i + 1;
                high = nums.size() - 1;
                
                while (low < high)
                {
                    if (nums[i] + nums[low] + nums[high] > 0)
                    {
                        high--;
                    }
                    
                    else if (nums[i] + nums[low] + nums[high] < 0)
                    {
                        low++;
                    }
                    
                    else 
                    {
                        midres[0] = nums[i];
                        midres[1] = nums[low];
                        midres[2] = nums[high];
                        res.push_back(midres);
                        
                        while (low < high && nums[low] == nums[low + 1])
                        {
                            low++;
                        }
                        
                        while (low < high && nums[high] == nums[high - 1])
                        {
                            high--;
                        }
                        
                        low++;
                        high--;
                        
                    }
                }
            }
        }
        return res;
    }
};