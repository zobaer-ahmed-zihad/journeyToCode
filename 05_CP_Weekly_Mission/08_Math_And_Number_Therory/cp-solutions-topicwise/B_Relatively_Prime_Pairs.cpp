#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// int GCD(ll a, ll b)
// {
//     return __gcd(a, b);
// }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll l, r;
    cin >> l >> r;
    cout << "YES"<<endl;
    for (ll i = l; i < r+1; i += 2)
        cout << i << " " << i + 1 << endl;

    // ll l, r;
    // cin >> l >> r;
    // vector<pair<ll, ll>> v;
    // for (ll i = l; i < r; i+=2)
    // {
    //     ll gcd = GCD(i, i + 1);
    //     if (gcd == 1)
    //         v.push_back({i, i + 1});
    // }
    // ll totalPairs = (r - l + 1) / 2;
    // if (v.size() >= totalPairs)
    // {
    //     cout << "YES" << endl;
    //     for (ll i = 0; i < totalPairs; i++)
    //     {
    //         cout << v[i].first << " " << v[i].second << endl;
    //     }
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }

    return 0;
}
//problem link: https://codeforces.com/problemset/problem/1051/B