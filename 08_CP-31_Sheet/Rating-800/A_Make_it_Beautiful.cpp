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
    int min = v.front();
    int max = v.back();
    if (min == max)
        cout << "NO" << '\n';
    else
    {
        cout << "YES" << '\n';
        cout << max << " ";
        for (int i = 0; i < n - 1; i++)
        {
            cout << v[i] << " ";
        }
        cout << '\n';
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
// time complexity - O(n)
// problem link: https://codeforces.com/problemset/problem/1783/A