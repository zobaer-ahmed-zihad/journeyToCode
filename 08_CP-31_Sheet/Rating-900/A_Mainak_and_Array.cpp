#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max_value = a[n - 1] - a[0];
    // Take all elements as a subsegment
    for (int i = 0; i < n - 1; i++)
    {
        max_value = max(max_value, a[i] - a[i + 1]);
    }
    // Fixed a[0]
    for (int i = 1; i < n; i++)
    {
        max_value = max(max_value, a[i] - a[0]);
    }
    // Fixed a[n-1]
    for (int i = 0; i < n - 1; i++)
    {
        max_value = max(max_value, a[n - 1] - a[i]);
    }
    cout << max_value << '\n';
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

//Problem link: https://codeforces.com/problemset/problem/1726/A
//Time complexity: O(n)