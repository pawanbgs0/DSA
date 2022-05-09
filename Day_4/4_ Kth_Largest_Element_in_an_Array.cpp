/*Given an integer array nums and an integer k, return the kth largest element in the array.

Note that it is the kth largest element in the sorted order, not the kth distinct element.

*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        priority_queue<int> bucket;
        
        for (int i = 0; i < nums.size(); i++)
        {
            bucket.push(nums[i]);
        }
        
        for (int i = 1; i < k; i++)
        {
            bucket.pop();
        }
        
        return bucket.top();
    }
};