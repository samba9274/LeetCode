#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numIslands(vector<vector<char>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        for (vector<char> row : *grid)
        {
            row.insert(row.begin(), '0');
            row.push_back('0');
            // for (char c : row)
            //     cout << c << " ";
            // cout << "\n";
        }
        // grid.insert(grid.begin(), vector<char>('0', n + 2));
        // grid.push_back(vector<char>('0', n + 2));
        for (vector<char> row : grid)
        {
            for (char c : row)
                cout << c << " ";
            cout << "\n";
        }
        return 0;
    }
};

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}