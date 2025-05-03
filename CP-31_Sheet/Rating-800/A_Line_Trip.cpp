#include <bits/stdc++.h>
using namespace std;
void zihad_solve()
{
    int n, x;
    cin >> n >> x;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    
    int max_distance = ar[0];
    for (int i = 0; i < n - 1; i++)
    {
        max_distance = max(max_distance, ar[i + 1] - ar[i]);
    }
    max_distance = max(max_distance, (x - ar[n - 1]) * 2);
    cout << max_distance << '\n';
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
// problem link: https://codeforces.com/contest/1901/problem/A