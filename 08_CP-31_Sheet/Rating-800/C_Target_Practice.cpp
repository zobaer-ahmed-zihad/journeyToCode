#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    char v[11][11];
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cin >> v[i][j];
        }
    }
    int l, r, ans = 0;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (v[i][j] == 'X')
            {
                (i >= 6) ? l = 11 - i : l = i;
                (j >= 6) ? r = 11 - j : r = j;
                int mn = min(l, r);
                ans += mn;
            }
        }
    }
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solveTestCase();
    }
    return 0;
}
//Time complexity - O(100)
// problem link: https://codeforces.com/contest/1873/problem/C