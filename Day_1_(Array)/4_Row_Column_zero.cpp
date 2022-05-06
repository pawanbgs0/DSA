/*Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int row = matrix[0].size();
        int column = matrix.size();
        vector<bool> row_space(row, false), column_space(column, false);

        for (int i = 0; i < column; i++)
        {
            for (int j = 0; j < row; j++)
            {
                if (matrix[i][j] == 0)
                {
                    row_space[j] = true;
                    column_space[i] = true;
                }
            }
        }

        for (int i = 0; i < row_space.size(); i++)
        {
            if (row_space[i] == true)
            {
                for (int j = 0; j < column_space.size(); j++)
                {
                    matrix[j][i] = 0;
                }
            }
        }

        for (int i = 0; i < column_space.size(); i++)
        {
            if (column_space[i] == true)
            {
                for (int j = 0; j < row_space.size(); j++)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};