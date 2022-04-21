#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<double> m;
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] < nums2[j])
                m.push_back(nums1[i++]);
            else
                m.push_back(nums2[j++]);
        }
        while (i < nums1.size())
            m.push_back(nums1[i++]);
        while (j < nums2.size())
            m.push_back(nums2[j++]);
        int n = m.size();
        if (n % 2 == 1)
            return m[n / 2];
        return (m[n / 2] + m[(n / 2) - 1]) / 2;
    }
};
int main(void)
{
    vector<int> a({1, 2});
    vector<int> b({3, 4});
    Solution s;
    cout << s.findMedianSortedArrays(a, b) << "\n";
    return 0;
}