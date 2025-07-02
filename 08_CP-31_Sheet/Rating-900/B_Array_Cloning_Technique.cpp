#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        ll val;
        cin >> val;
        mp[val]++;
    }
    int max_frequency = 0;
    for (auto [key, val] : mp)
    {
        max_frequency = max(max_frequency, val);
    }

    int operations = 0;
    while (max_frequency < n)
    {
        operations++;
        if (max_frequency * 2 <= n)
        {
            operations += max_frequency;
            max_frequency *= 2;
        }
        else
        {
            operations += (n - max_frequency);
            max_frequency = n;
        }
    }
    cout << operations << '\n';
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
//Time complexity - O(logn)
//Problem link: https://codeforces.com/problemset/problem/1665/B