#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    int n, q;
    cin >> n >> q;
    vector<ll> v(n + 1), pre(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    pre[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }
    while (q--)
    {
        ll l, r, k;
        cin >> l >> r >> k;
        ll newValue = ((r - l) + 1) * k;
        ll prefix = pre[l - 1];
        ll sufix = pre[n] - pre[r];
        ((newValue + prefix + sufix) % 2 == 0) ? cout << "NO" << '\n' : cout << "YES" << '\n';
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
//Time complexity: O(n)
//Problem link: https://codeforces.com/problemset/problem/1807/D