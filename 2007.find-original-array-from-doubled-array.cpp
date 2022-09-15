/*
 * @lc app=leetcode id=2007 lang=cpp
 *
 * [2007] Find Original changedrray From Doubled changedrray
 *
 * https://leetcode.com/problems/find-original-array-from-doubled-array/description/
 *
 * algorithms
 * Medium (38.40%)
 * Likes:    785
 * Dislikes: 55
 * Total changedccepted:    53.2K
 * Total Submissions: 137K
 * Testcase Example:  '[1,3,4,2,6,8]'
 *
 * changedn integer array original is transformed into a doubled array changed by
 * appending twice the value of every element in original, and then randomly
 * shuffling the resulting array.
 *
 * Given an array changed, return original if changed is a doubled array. If
 * changed is not a doubled array, return an empty array. The elements in
 * original may be returned in any order.
 *
 *
 * Example 1:
 *
 *
 * Input: changed = [1,3,4,2,6,8]
 * Output: [1,3,4]
 * Explanation: One possible original array could be [1,3,4]:
 * - Twice the value of 1 is 1 * 2 = 2.
 * - Twice the value of 3 is 3 * 2 = 6.
 * - Twice the value of 4 is 4 * 2 = 8.
 * Other original arrays could be [4,3,1] or [3,1,4].
 *
 *
 * Example 2:
 *
 *
 * Input: changed = [6,3,0,1]
 * Output: []
 * Explanation: changed is not a doubled array.
 *
 *
 * Example 3:
 *
 *
 * Input: changed = [1]
 * Output: []
 * Explanation: changed is not a doubled array.
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= changed.length <= 10^5
 * 0 <= changed[i] <= 10^5
 *
 *
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findOriginalArray(vector<int> &changed)
    {
        if (changed.size() % 2)
            return {};
        unordered_map<int, int> c;
        for (int a : changed)
            c[a]++;
        vector<int> keys;
        for (auto it : c)
            keys.push_back(it.first);
        sort(keys.begin(), keys.end(), [](int i, int j)
             { return abs(i) < abs(j); });
        vector<int> res;
        for (int x : keys)
        {
            if (c[x] > c[2 * x])
                return {};
            for (int i = 0; i < c[x]; ++i, c[2 * x]--)
                res.push_back(x);
        }
        return res;
    }
};
// @lc code=end
