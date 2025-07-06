#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int mn = 0;
        for (int j = 0; j < n - i; j++)
        {
            mn = min(mn, v[i + j][j]);
        }
        ans += abs(mn);
    }
    for (int i = 1; i < n; i++)
    {
        int mn = 0;
        for (int j = 0; j < n - i; j++)
        {
            mn = min(mn, v[j][i + j]);
        }
        ans += abs(mn);
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
//Time Complexity - O(n*n)
//Problem link: https://codeforces.com/problemset/problem/2033/B