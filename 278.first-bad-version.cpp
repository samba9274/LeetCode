/*
 * @lc app=leetcode id=278 lang=cpp
 *
 * [278] First Bad Version
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        long int i = 0;
        for (long int k = (i + n) / 2; i <= n; k = (i + n) / 2)
        {
            if (isBadVersion(k) && !isBadVersion(k - 1))
                return k;
            else if (isBadVersion(k))
                n = k - 1;
            else
                i = k + 1;
        }
        return -1;
    }
};
// @lc code=end
