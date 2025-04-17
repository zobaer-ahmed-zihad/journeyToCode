#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> mp;
    while (n--)
    {
        string st;
        cin >> st;
        if (mp.find(st) != mp.end())
        {
            cout << "YES" << '\n';
        }
        else
        {
            mp.insert({st, 1});
            cout << "NO" << "\n";
        }
    }

    return 0;
}
//problem link: https://codeforces.com/contest/855/problem/A