/*
 * @lc app=leetcode id=41 lang=cpp
 *
 * [41] First Missing Positive
 *
 * https://leetcode.com/problems/first-missing-positive/description/
 *
 * algorithms
 * Hard (36.27%)
 * Likes:    11230
 * Dislikes: 1426
 * Total Accepted:    746.4K
 * Total Submissions: 2.1M
 * Testcase Example:  '[1,2,0]'
 *
 * Given an unsorted integer array nums, return the smallest missing positive
 * integer.
 *
 * You must implement an algorithm that runs in O(n) time and uses constant
 * extra space.
 *
 *
 * Example 1:
 *
 *
 * Input: nums = [1,2,0]
 * Output: 3
 * Explanation: The numbers in the range [1,2] are all in the array.
 *
 *
 * Example 2:
 *
 *
 * Input: nums = [3,4,-1,1]
 * Output: 2
 * Explanation: 1 is in the array but 2 is missing.
 *
 *
 * Example 3:
 *
 *
 * Input: nums = [7,8,9,11,12]
 * Output: 1
 * Explanation: The smallest positive integer 1 is missing.
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= nums.length <= 10^5
 * -2^31 <= nums[i] <= 2^31 - 1
 *
 *
 */

// @lc code=start
class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        set<int> s;
        for (int num : nums)
            s.insert(num);
        int k = 1;
        for (int num : s)
        {
            if (num < 1)
                continue;
            if (num == k)
                k++;
            else
                return k;
        }
        return k;
    }
};
// @lc code=end
