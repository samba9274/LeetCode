/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> numsA(nums1.begin(), nums1.end()), numsB(nums2.begin(), nums2.end());
        vector<int> res;
        for (set<int, greater<int>>::iterator itrA = numsA.begin(), itrB = numsB.begin(); itrA != numsA.end() && itrB != numsB.end();)
        {
            if (*itrA == *itrB)
            {
                res.push_back(*itrA);
                itrA++;
                itrB++;
            }
            else if (*itrA < *itrB)
                itrA++;
            else
                itrB++;
        }
        return res;
    }
};
// @lc code=end
