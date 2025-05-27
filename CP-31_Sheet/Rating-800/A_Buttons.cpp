#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void zihad_solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    int annaBtnCnt = 0, ketieBtnCnt = 0;
    if (c % 2 == 0)
    {
        annaBtnCnt = a + (c / 2);
        ketieBtnCnt = b + (c / 2);
    }
    else
    {
        annaBtnCnt = a + (c / 2) + 1;
        ketieBtnCnt = b + (c / 2);
    }
    (annaBtnCnt > ketieBtnCnt) ? cout << "First" << '\n' : cout << "Second" << '\n';
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
//problem link: https://codeforces.com/problemset/problem/1858/A