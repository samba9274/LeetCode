/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 *
 * https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
 *
 * algorithms
 * Medium (40.49%)
 * Likes:    11850
 * Dislikes: 315
 * Total Accepted:    1.2M
 * Total Submissions: 2.9M
 * Testcase Example:  '[5,7,7,8,8,10]\n8'
 *
 * Given an array of integers nums sorted in non-decreasing order, find the
 * starting and ending position of a given target value.
 *
 * If target is not found in the array, return [-1, -1].
 *
 * You must write an algorithm with O(log n) runtime complexity.
 *
 *
 * Example 1:
 * Input: nums = [5,7,7,8,8,10], target = 8
 * Output: [3,4]
 * Example 2:
 * Input: nums = [5,7,7,8,8,10], target = 6
 * Output: [-1,-1]
 * Example 3:
 * Input: nums = [], target = 0
 * Output: [-1,-1]
 *
 *
 * Constraints:
 *
 *
 * 0 <= nums.length <= 10^5
 * -10^9 <= nums[i] <= 10^9
 * nums is a non-decreasing array.
 * -10^9 <= target <= 10^9
 *
 *
 */

// @lc code=start
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> res;
        res.push_back(-1);
        res.push_back(-1);
        unsigned int mid, l, h, n = nums.size();
        for (mid = n / 2, l = 0, h = n; l < h && nums[mid] != target;)
        {
            if (nums[mid] < target)
                l = mid + 1;
            else
                h = mid;
            mid = (l + h) / 2;
        }
        if (l >= h)
            return res;
        res[0] = mid;
        res[1] = mid;
        while (mid >= 0 && mid < nums.size() && nums[mid] == target)
            mid++;
        res[1] = mid - 1;
        mid = res[0];
        while (mid >= 0 && mid < nums.size() && nums[mid] == target)
            mid--;
        res[0] = mid + 1;
        return res;
    }
};
// @lc code=end
