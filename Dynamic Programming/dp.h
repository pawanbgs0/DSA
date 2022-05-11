#include <bits/stdc++.h>
using namespace std;

int fibonacci(int num, vector<int> &dp);
int climb(int num, vector<int> &dp); // https://bit.ly/3t1Sjyx
int frog_jump(int index, vector<int> &heights, vector<int> &dp); //https://bit.ly/3JPcoOx
int subsquence_sum(int index, vector<int> arr, vector<int> &dp); //https://leetcode.com/problems/house-robber/
int subsquence_sumT(vector<int> arr); // above question in tabulation form
int ninja_training(int day, int last, vector<vector<int>> &points, vector<vector<int>> &dp); //https://bit.ly/3F4yl8z
int unique_paths(int rowIndex, int columnIndex, vector<vector<int>> &dp); //https://leetcode.com/problems/unique-paths/