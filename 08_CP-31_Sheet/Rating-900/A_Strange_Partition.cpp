#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    ll min = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        min += v[i];
        max += ceil(v[i] * 1.0 / x);
    }
    min = ceil(min * 1.0 / x);
    cout << min << " " << max << '\n';
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
//Time complexity - O(n)
//Problem link: https://codeforces.com/problemset/problem/1471/A