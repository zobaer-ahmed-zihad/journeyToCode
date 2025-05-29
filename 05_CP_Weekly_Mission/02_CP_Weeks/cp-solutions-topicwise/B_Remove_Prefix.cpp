#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[v[i]] == 1)
        {
            break;
        }
        else
        {
            cnt++;
            mp[v[i]]++;
        }
    }
    cout << n - cnt << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
//problem link: https://codeforces.com/contest/1714/problem/B