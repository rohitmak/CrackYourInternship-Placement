#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n = nums.size();
        // int leftZeroes = 0;
        // for(int i = 0; i < n; i++)
        // {
        //     if(nums[i] == 0)
        //         leftZeroes++;
        //     else if(leftZeroes > 0)
        //     {
        //         int temp = nums[i];
        //         nums[i] = 0;
        //         nums[i - leftZeroes] = temp;
        //     }
        // }
        vector<int> ans(n, 0);
        int index = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != 0)
            {
                ans[index] = nums[i];
                index++;
            }
        }
        nums = ans;
    }
};

int main()
{

    return 0;
}