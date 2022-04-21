#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int mySqrt(int x)
    {
        long long int i = 1;
        while (i * i <= x)
            i++;
        return --i;
    }
};

int main(void)
{
    Solution s;
    cout << s.mySqrt(9) << "\n";
    return 0;
}