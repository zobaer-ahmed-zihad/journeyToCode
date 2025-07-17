#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    ll n;
    cin >> n;
    int i = 1;
    while (n % i == 0)
        i++;
    cout << i - 1 << '\n';
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
//Time Complexity: O(n)
//Problem link: https://codeforces.com/problemset/problem/1855/B