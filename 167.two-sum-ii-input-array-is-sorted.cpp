/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int i = 0, j = numbers.size() - 1;
        vector<int> result;
        while (i < j)
        {
            if ((numbers[i] + numbers[j]) == target)
            {
                result.push_back(i + 1);
                result.push_back(j + 1);
                return result;
            }
            if ((numbers[i] + numbers[j]) < target)
                i++;
            else
                j--;
        }
        return result;
    }
};
// @lc code=end
