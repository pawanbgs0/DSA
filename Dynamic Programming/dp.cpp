#include "dp.h"

int fibonacci(int num, vector<int> &dp)
{
    if (num <= 1)
        return num;

    if (dp[num] != -1)
        return dp[num];

    int prev = fibonacci(num - 1, dp);
    int prev2 = fibonacci(num - 2, dp);

    return dp[num] = prev + prev2;
}

int climb(int num, vector<int> &dp)
{
    if (num == 0 || num == 1)
        return 1;

    if (num < 0)
        return 0;

    if (dp[num] != -1)
        return dp[num];

    int one = climb(num - 1, dp);
    
    int two = climb(num - 2, dp);

    return dp[num] = one + two;
}

int frog_jump(int index, vector<int> &heights, vector<int> &dp)
{
    if (index == 0)
        return 0;

    if (dp[index] != -1)
        return dp[index];

    int one = frog_jump(index - 1, heights, dp) + abs(heights[index] - heights[index - 1]);

    int two = INT_MAX;
    if (index > 1)
        two = frog_jump(index - 2, heights, dp) + abs(heights[index] - heights[index - 2]);

    return dp[index] = min(one, two);
}


int subsquence_sum(int index, vector<int> arr, vector<int> &dp)
{
    if (index == 0)
        return arr[index];

    if (index < 0)
        return 0;

    if (dp[index] != -1)
        return dp[index];

    int pick = arr[index] + subsquence_sum(index - 2, arr, dp);
    int not_pick = subsquence_sum(index - 1, arr, dp);

    return dp[index] = max(pick, not_pick);
}

int subsquence_sumT(vector<int> arr)
{
    vector<int> dp(arr.size(), 0);

    dp[0] = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        int pick = arr[i];
        if (i > 1)
            pick += dp[i - 2]; // to counter negative index as from above code

        int not_pick = dp[i - 1];

        dp[i] = max(pick, not_pick);
    }

    return dp[arr.size() - 1];
}

int ninja_training(int day, int last, vector<vector<int>> &points, vector<vector<int>> &dp)
{
    if (day == 0)
    {
        int maxi = INT_MIN;

        for (int task = 0; task < 3; task++)
        {
            if (task != last)
                maxi = max(maxi, points[day][task]);
        }
        return maxi;
    }

    int maxi = INT_MIN;

    for (int task = 0; task < 3; task++)
    {
        if (task != last)
        {
            int point = points[day][task] + ninja_training(day - 1, task, points, dp);

            maxi = max(maxi, point);
        }
    }

    return maxi;
}

int unique_paths(int rowIndex, int columnIndex, vector<vector<int>> &dp)
{
    if (rowIndex == 0 && columnIndex == 0)
        return 1;
    
    if (rowIndex < 0 || columnIndex < 0)
        return 0;

    if (dp[rowIndex][columnIndex] != -1)
        return dp[rowIndex][columnIndex];

    int top = unique_paths(rowIndex, columnIndex - 1, dp);
    int left = unique_paths(rowIndex - 1, columnIndex, dp);

    return dp[rowIndex][columnIndex] = top + left;
}