#include <bits/stdc++.h>
using namespace std;
void zihad_solve()
{
    int n;
    cin >> n;
    int sum = 0;
    int ar[n-1];
    for (int i = 0; i < n-1; i++)
    {
        int val;
        cin >> val;
        sum += val;
    }
    cout << -1 * sum << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        zihad_solve();
    }
    return 0;
}
//time complexity - O(n)
// problem link: https://codeforces.com/contest/1877/problem/A