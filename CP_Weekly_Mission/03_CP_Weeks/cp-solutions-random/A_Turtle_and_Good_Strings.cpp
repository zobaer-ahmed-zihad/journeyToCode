#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string st;
        cin >> st;
        char front = st[0];
        char back = st[n - 1];
        if (n >= 2 && front != back)
        {
            cout << "YES" << '\n';
        }
        else
            cout << "NO" << '\n';
    }

    return 0;
}
//problem link: https://codeforces.com/contest/2003/problem/A