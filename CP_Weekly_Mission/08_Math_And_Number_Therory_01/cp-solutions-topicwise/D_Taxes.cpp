#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    if (isPrime(n))
        cout << "1";
    else if ((n % 2 == 0))
        cout << "2";
    else
    {
        (isPrime(n - 2)) ? cout << "2" << '\n' : cout << "3" << '\n';
    }
    return 0;
}
//problem link: https://codeforces.com/problemset/problem/735/D