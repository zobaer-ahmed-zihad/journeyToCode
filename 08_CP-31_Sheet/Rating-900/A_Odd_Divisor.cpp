#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    ll x;
    cin >> x;
    while (x % 2 == 0)
        x /= 2;
    (x > 1) ? cout << "YES" << '\n' : cout << "NO" << '\n';
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
//Time complexity: O(logn)
//problem link: https://codeforces.com/problemset/problem/1475/A