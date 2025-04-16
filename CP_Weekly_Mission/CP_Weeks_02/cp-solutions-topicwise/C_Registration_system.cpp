#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    map<string, int> mp;
    while (t--)
    {
        string st;
        cin >> st;
        if (mp.find(st) != mp.end())
        {
            int cnt = mp[st];
            mp.erase(st);
            mp.insert({st, ++cnt});
            cout << st << mp[st] << '\n';
        }
        else
        {
            mp.insert({st, 0});
            cout << "OK" << '\n';
        }
    }

    return 0;
}
//problem link: https://codeforces.com/contest/4/problem/C