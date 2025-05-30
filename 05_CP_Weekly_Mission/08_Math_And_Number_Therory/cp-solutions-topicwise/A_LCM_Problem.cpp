#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    int n;
    ll l, r;
    cin >> l >> r;
    if (l * 2 <= r)
        cout << l << " " << l * 2 << '\n';
    else
        cout << "-1 -1" << '\n';
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
//problem link: https://codeforces.com/contest/1389/problem/A