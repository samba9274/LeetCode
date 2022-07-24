/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        unsigned short int minIndex = 0, minNum, i = 0, mid, l, h;
        while (i < nums.size())
        {
            if (nums[i] < minNum)
            {
                minIndex = i;
                minNum = nums[i];
            }
            i++;
        }
        rotate(nums.begin(), nums.begin() + minIndex, nums.end());
        for (mid = nums.size() / 2, l = 0, h = nums.size(); l < h && nums[mid] != target;)
        {
            if (nums[mid] < target)
                l = mid + 1;
            else
                h = mid;
            mid = (l + h) / 2;
        }
        if (l >= h)
            return -1;
        return (mid + minIndex) % nums.size();
    }
};
// @lc code=end
