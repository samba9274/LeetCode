/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int reverse(int32_t x)
    {
        string strNum = to_string(abs(x));
        std::reverse(strNum.begin(), strNum.end());
        int64_t reverseNum = stol(strNum);
        if (x < 0)
            reverseNum *= -1;
        if (reverseNum > INT_MAX || reverseNum < INT_MIN)
            return 0;
        return reverseNum;
    }
};
// @lc code=end
