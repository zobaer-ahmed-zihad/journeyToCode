#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<ll> divisors;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (i != (n / i))
                divisors.push_back(n / i);
        }
    }
    sort(divisors.begin(), divisors.end());
    (divisors.size() < k) ? cout << "-1" : cout << divisors[k - 1];

    return 0;
}

//problem link: https://codeforces.com/problemset/problem/762/A