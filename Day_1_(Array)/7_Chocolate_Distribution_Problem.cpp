/*Given an array of n integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that: 

Each student gets one packet.
The difference between the number of chocolates in the packet with maximum chocolates and packet with minimum chocolates given to the students is minimum.*/

#include <bits/stdc++.h>
using namespace std;

int min_diff(vector<int> A, int students)
{
    int minDiff = INT_MAX;
    int i = 0, j = students - 1;

    sort(A.begin(), A.end());

    while (j < A.size())
    {
        int value = A[j] - A[i];
        minDiff = min(minDiff, value);
        j++;
        i++;
    }

    return minDiff;
}

int main()
{
    vector<int> A = {12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50} ;
    int students = 7;

    cout << min_diff(A, students);

    return 0;
}