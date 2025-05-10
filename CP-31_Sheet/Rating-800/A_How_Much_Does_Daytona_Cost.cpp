#include <bits/stdc++.h>
using namespace std;
void zihad_solve()
{
    int n, m;
    cin >> n >> m;
    bool number_is_present = false;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (val == m)
            number_is_present = true;
    }

    (number_is_present) ? cout << "YES" << '\n' : cout << "NO" << '\n';
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
//time complexity - O(n)
//problem link: https://codeforces.com/problemset/problem/1878/A