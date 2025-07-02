#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll cnt = 1, mx = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] - v[i - 1] <= k)
        {
            cnt++;
        }
        else
        {
            cnt = 1;
        }
        mx = max(cnt, mx);
    }
    cout << n - mx << '\n';
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
//time complexity - O(nlogn)
//problem link: https://codeforces.com/contest/1850/problem/D