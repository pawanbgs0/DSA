/*Given an integer array nums and an integer k, return the number of non-empty subarrays that have a sum divisible by k.

A subarray is a contiguous part of an array.*/

#include <bits/stdc++.h>
using namespace std;

class Solution { // not optimised
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        int start, end, mid, sum;
        int res = 0;
        
        for (start = 0; start < nums.size(); start++)
        {
            for (end = start; end < nums.size(); end++)
            {
                sum = 0;
    
                for (mid = start; mid <= end; mid++)
                {
                    sum += nums[mid];
                }
                
                if (sum % k == 0)
                    res++;
            }
        }
        return res;
    }
};  