/*You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int i = 0, j = height.size() - 1;
        int maxWater = INT_MIN;
        int distance, midres;
        
        while (i < j)
        {
            distance = j - i;
            
            if (height[i] < height[j])
            {
                midres = height[i] * distance;
                maxWater = max(maxWater, midres);
                i++;
            }
            
            else if (height[i] > height[j])
            {
                midres = height[j] * distance;
                maxWater = max(maxWater, midres);
                j--;
            }
            
            else 
            {
                midres = height[i] * distance;
                maxWater = max(maxWater, midres);
                i++;
            }
        }
        return maxWater;
    }
};