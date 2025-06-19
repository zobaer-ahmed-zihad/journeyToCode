#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, x;
        cin >> n >> k >> x;
        ll minSum = 0, maxSum = 0;
        minSum = (k * (k + 1)) / 2;
        maxSum = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;
        (minSum <= x && x <= maxSum) ? cout << "YES" << '\n' : cout << "NO" << '\n';
    }

    return 0;
}
// problem link: https://codeforces.com/contest/1878/problem/C