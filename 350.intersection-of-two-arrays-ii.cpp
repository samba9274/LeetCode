/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 */

// @lc code=start
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> res;
        for (vector<int>::iterator itrA = nums1.begin(), itrB = nums2.begin(); itrA != nums1.end() && itrB != nums2.end();)
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
