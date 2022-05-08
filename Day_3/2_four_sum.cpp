#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) // not correct
    {
        int low, high;
        vector<int> midres(4);
        vector<vector<int>> res;
        
        if (res.size() < 4)
            return res;
        
        for (int i = 0; i < res.size() - 3; i++)
        {
            if (i == 0 || (i > 0 && nums[i] != nums[i + 1]))
            {
                for (int j = i + 1; j < res.size() - 2; j++)
                {
                    if (j == i + 1 || (j > i + 1 && nums[j] != nums[j + 1]))
                    {
                        low = j + 1;
                        high = res.size() - 1;

                        while (low < high)
                        {                    
                            if (nums[j] != nums[j + 1])
                            {
                                if (nums[i] + nums[j] + nums[low] + nums[high] > target)
                                high--;

                                else if (nums[i] + nums[j] + nums[low] + nums[high] < target)
                                    low++;

                                else 
                                {
                                    midres[0] = nums[i];
                                    midres[1] = nums[j];
                                    midres[2] = nums[low];
                                    midres[3] = nums[high];

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
                }
            }
        }
        return res;
    }
};