#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int choclateDistribution(vector<int> &arr, int m)
    {
        int n = arr.size();
        if (m == 0 || n == 0)
            return 0;
        if (n < m)
            return -1;
        sort(arr.begin(), arr.end());
        int min_diff = INT_MAX;
        for (int i = 0; i < (n - m + 1); i++)
        {
            int index = (i + m - 1);
            if (arr[index] - arr[i] < min_diff)
                min_diff = arr[index] - arr[i];
        }
        return min_diff;
    }
};

int main()
{
    Solution s;
    vector<int> arr = {12, 4, 7, 9, 2, 23, 25, 41, 30,
                       40, 28, 42, 30, 44, 48, 43, 50};
    int m = 7; // Number of students
    cout << "Minimum difference is " << s.choclateDistribution(arr, m) << "\n";
    return 0;
}