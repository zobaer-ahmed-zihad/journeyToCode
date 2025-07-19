#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    ll n;
    cin >> n;
    if (n % 2 == 1 || n < 4)
        cout << "-1" << '\n';
    else
    {
        ll min_buses = ceil(n * 1.0 / 6);
        ll max_buses = n / 4;

        cout << min_buses << " " << max_buses << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solveTestCase();
    }
    return 0;
}

//Time Complexity - O(n)
//Problem link: https://codeforces.com/problemset/problem/1679/A