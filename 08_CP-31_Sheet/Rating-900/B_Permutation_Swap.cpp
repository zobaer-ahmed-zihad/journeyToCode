#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int k = abs(v[0] - 1);
    for (int i = 1; i < n; i++)
    {
        k = __gcd(k, abs(v[i] - (i + 1)));
    }
    cout << k << '\n';
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

//Problem link: https://codeforces.com/problemset/problem/1828/B
//Time Complexity: O(nlongn)