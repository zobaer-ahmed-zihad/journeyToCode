#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<pair<string, string>, bool> mp;
    while (n--)
    {
        string st1, st2;
        cin >> st1 >> st2;
        mp.insert({{st1, st2}, true});
    }
    cout << mp.size();

    return 0;
}
//problem link: https://codeforces.com/contest/44/problem/A