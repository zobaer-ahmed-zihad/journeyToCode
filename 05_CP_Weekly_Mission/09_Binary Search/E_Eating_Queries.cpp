#include <bits/stdc++.h>
using namespace std;
void solveTestCase()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n), prefix(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.rbegin(), v.rend());
    prefix[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + v[i];
    }
    for (int i = 0; i < q; i++)
    {
        int k, ans = -1;
        cin >> k;
        auto it = lower_bound(prefix.begin(), prefix.end(), k);
        if (it != prefix.end())
        {
            ans = it - prefix.begin();
        }
        (ans == -1) ? cout << "-1" << '\n' : cout << ans+1 << '\n';
    }
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
//problem link: https://codeforces.com/contest/1676/problem/E