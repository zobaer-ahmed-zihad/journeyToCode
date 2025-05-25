#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void zihad_solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) // take input
    {
        cin >> v[i];
    }
    ll G1 = 0, G2 = 0;
    for (int i = 0; i < n; i += 2) // GCD G1
    {
        G1 = __gcd(G1, v[i]);
    }
    for (int i = 1; i < n; i += 2) // GCD G2
    {
        G2 = __gcd(G2, v[i]);
    }

    bool ok = true;
    ll result = 0;
    for (int i = 1; i < n; i += 2)
    {
        if (v[i] % G1 == 0)
            ok = false;
    }
    if (ok)
    {
        result = G1;
    }
    else
    {
        ok = true;
        for (int i = 0; i < n; i += 2)
        {
            if (v[i] % G2 == 0)
                ok = false;
        }
        if (ok)
            result = G2;
    }
    cout << result << '\n';
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
//problem link: https://codeforces.com/problemset/problem/1618/C