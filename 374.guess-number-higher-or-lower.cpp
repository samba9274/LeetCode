/*
 * @lc app=leetcode id=374 lang=cpp
 *
 * [374] Guess Number Higher or Lower
 */

// @lc code=start
/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution
{
public:
    int guessNumber(int n)
    {
        unsigned int mid, l, h;
        for (mid = n / 2, l = 0, h = n; guess(mid) != 0;)
        {
            if (guess(mid) == 1)
                l = mid + 1;
            else
                h = mid;
            mid = (l + h) / 2;
        }
        return mid;
    }
};
// @lc code=end
