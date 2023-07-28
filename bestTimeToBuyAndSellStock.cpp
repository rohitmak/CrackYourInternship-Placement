#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int profit = 0;
        int left = 0, right = 1;

        while (right < n)
        {
            if (prices[right] > prices[left])
                profit = max(profit, prices[right] - prices[left]);
            else
                left = right;
            right++;
        }

        return profit;
    }
};

int main()
{

    return 0;
}