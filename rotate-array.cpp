#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        if (k > nums.size())
        {
            int z = nums.size() - k;
            nums.insert(nums.end(), nums.begin(), nums.begin() + z);
            nums.erase(nums.begin(), nums.begin() + z);
            return;
        }
        for (int i = 0; i < k; i++)
            nums.insert(nums.begin(), nums[nums.size() - i - 1]);
        nums.erase(nums.end() - k, nums.end());
    }
};