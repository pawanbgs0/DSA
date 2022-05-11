#include "dp.h"

int main()
{
    vector<int> test = {2, 1, 4, 9};
    vector<int> dp(test.size(), -1);

    vector<vector<int>> test2 = {{10, 40, 70}, {20, 50, 80}, {30, 60, 90}};
    vector<vector<int>> dp2(23, vector<int> (12, -1));
    
    // cout << fibonacci(5, dp);
    // cout << climb(1, dp);

    // cout << subsquence_sum(test.size() -1, test, dp) << endl;
    // cout << subsquence_sumT(test) << endl;

    // cout << ninja_training(test2.size() - 1, 3, test2, dp2); 

    cout << unique_paths(22, 11, dp2);
    
    return 0;
}