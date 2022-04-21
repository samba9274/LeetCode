#include <bits/stdc++.h>
using namespace std;
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
int main(void)
{
    vector<int> a({3, 4, -1, 1});
    Solution s;
    cout << s.firstMissingPositive(a) << "\n";
    return 0;
}