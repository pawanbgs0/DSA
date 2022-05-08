#include <bits/stdc++.h>
using namespace std;

class Solution {
    
    int range_sum(vector<int> A, int startIndex, int endIndex)
    {
        int res = 0;
        
        for (int i = startIndex; i < endIndex; i++)
        {
            res += A[i];
        }
        return res;
    }
    
public:
    int maxScore(vector<int>& cardPoints, int k) 
    {
        int maxPoint = 0;
        int start = 0, end = cardPoints.size() - 1;
        int frontSum = 0, backSum = 0, currSum = 0;
        
        
        
        // for (int i = cardPoints.size() - k; i < cardPoints.size(); i++)
        // {
        //     backSum += cardPoints[i];
        // }
        
        while (k--)
        {
            if (cardPoints[start] > cardPoints[end])
            {
                currSum += cardPoints[start];
                start++;
            }
            
            else if (cardPoints[end] > cardPoints[start])
            {
                currSum += cardPoints[end];
                end--;
            }
            
            else
            {
                frontSum = range_sum(cardPoints, start + 1, start + k - 1);
                backSum = range_sum(cardPoints, end - k + 1, end - 1);
                
                if (frontSum > backSum)
                {
                    currSum += cardPoints[start];
                    start++;
                }
                else 
                {
                    currSum += cardPoints[end];
                    end--;
                }
            }
        }
        return currSum;
    }
};