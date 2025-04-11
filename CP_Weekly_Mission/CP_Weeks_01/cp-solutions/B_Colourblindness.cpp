#include <bits/stdc++.h>
using namespace std;
void solve(int col)
{
    string st1, st2;
    cin >> st1 >> st2;
    for (int i = 0; i < st1.size(); i++)
    {
        if (st1[i] == 'G')
        {
            st1[i] = 'B';
        }
        if (st2[i] == 'G')
        {
            st2[i] = 'B';
        }
        }
    (st1 == st2) ? cout << "YES" << '\n' : cout << "NO" << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int col;
        cin >> col;
        solve(col);
    }

    return 0;
}
//problem link: https://codeforces.com/contest/1722/problem/B