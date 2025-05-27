#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<int, string> mp;
    map<string, int> mp2;
    vector<pair<int, string>> v;

    for (int i = 0; i < n; i++)
    {
        string st;
        cin >> st;
        mp.insert({i, st});
    }

    for (auto [id, name] : mp)
    {
        if (mp2.find(name) != mp2.end())
        {
            mp2.erase(name);
            mp2.insert({name, id});
        }
        else
        {
            mp2.insert({name, id});
        }
    }
    for (auto [name, id] : mp2)
    {
        v.push_back({id, name});
    }
    sort(v.rbegin(), v.rend());
    for (auto [id, name] : v)
        cout << name << '\n';

    return 0;
}
//problem link: https://codeforces.com/problemset/problem/637/B