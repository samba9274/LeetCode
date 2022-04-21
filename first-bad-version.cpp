#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int firstBadVersion(int n)
    {
        long int i = 0;
        for (long int k = (i + n) / 2; i <= n; k = (i + n) / 2)
        {
            if (isBadVersion(k) && !isBadVersion(k - 1))
                return k;
            else if (isBadVersion(k))
                n = k - 1;
            else
                i = k + 1;
        }
        return -1;
    }
};