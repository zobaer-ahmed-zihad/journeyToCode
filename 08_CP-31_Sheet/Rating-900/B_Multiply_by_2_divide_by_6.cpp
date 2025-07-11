#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    ll n;
    cin >> n;
    int cnt2 = 0, cnt3 = 0;
    while (n % 2 == 0)
    {
        n /= 2;
        cnt2++;
    }
    while (n % 3 == 0)
    {
        n /= 3;
        cnt3++;
    }
    if (n == 1 && cnt2 <= cnt3)
    {
        cout << (cnt3 - cnt2) + cnt3 << '\n';
    }
    else
        cout << "-1" << '\n';
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
//Time complexity - O(logn)
//Problem link: https://codeforces.com/problemset/problem/1374/B