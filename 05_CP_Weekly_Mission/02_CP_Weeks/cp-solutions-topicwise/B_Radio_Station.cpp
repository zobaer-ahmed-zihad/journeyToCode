#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    while (n--)
    {
        string name, ip;
        cin >> name >> ip;
        mp.insert({ip, name});
    }
    while (m--)
    {
        string command, IP;
        cin >> command >> IP;
        string originalIp = IP;
        IP.pop_back();
        string name = mp[IP];
        cout << command << " " << originalIp << " #" << name << '\n';
    }

    return 0;
}
//problem link: https://codeforces.com/problemset/problem/918/B