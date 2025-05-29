#include <bits/stdc++.h>
using namespace std;
void zihad_solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) //O(n)
    {
        int val;
        cin >> val;
        mp[val]++; //O(logn)
    }

    if (mp.size() >= 3)
        cout << "No" << '\n';
    else
    {
        (abs(mp.begin()->second - mp.rbegin()->second) <= 1) ? cout << "Yes" << '\n' : cout << "No" << '\n';
    }
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
//time complexity - O(nlogn)
//problem link: https://codeforces.com/problemset/problem/1890/A