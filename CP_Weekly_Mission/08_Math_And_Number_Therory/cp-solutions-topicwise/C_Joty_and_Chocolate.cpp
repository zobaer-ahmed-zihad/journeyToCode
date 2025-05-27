#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll LCM(ll a, ll b)
{
    ll G = __gcd(a, b);
    return (a / G) * b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll cnt1 = n / a;
    ll cnt2 = n / b;

    ll commonMultiple = LCM(a, b);
    ll commonMulCnt = n / commonMultiple;

    if (p <= q)
        cnt1 -= commonMulCnt;
    else 
        cnt2 -= commonMulCnt;
    
    cout << (cnt1 * p) + (cnt2 * q);

    return 0;
}
//problem link: https://codeforces.com/problemset/problem/678/C