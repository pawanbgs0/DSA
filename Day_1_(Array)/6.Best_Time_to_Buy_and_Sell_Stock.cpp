/*You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int maxProfit = 0;
        int start = 0, end = 1;
        
        while (end < prices.size())
        {
            if (prices[end] > prices[start])
                maxProfit = max(maxProfit, prices[end] - prices[start]);
            
            else
                start = end;
            
            end++;
        }
        
        return maxProfit;
    }
};