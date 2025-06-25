#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    int n, a, b;
    cin >> n >> a >> b;

    if ((a + 2 + b <= n) || (a == b && a == n))
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
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
//time complexity - O(n)
//problem link: https://codeforces.com/problemset/problem/1761/A