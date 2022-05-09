/*You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int res = 0;
    int climb_helper(int n, vector<int> &dp)
    {
        if (n <= 1)
            return 1;
        
        if (dp[n] != -1)
            return dp[n];
        
        int one = climb_helper(n - 1, dp);
        int two = climb_helper(n - 2, dp);
        
        return dp[n] = one + two;
    }
    
    
    int climbStairs(int n) 
    {
        vector<int> dp(n + 1, -1);
        return climb_helper(n, dp);
    }
};