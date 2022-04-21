#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> sortedSq(nums.size());
        int i = 0, j = nums.size() - 1;
        for (int k = nums.size() - 1; k >= 0; k--)
            sortedSq[k] = abs(nums[i]) < abs(nums[j]) ? nums[j] * nums[j--] : nums[i] * nums[i++];
        return sortedSq;
    }
};