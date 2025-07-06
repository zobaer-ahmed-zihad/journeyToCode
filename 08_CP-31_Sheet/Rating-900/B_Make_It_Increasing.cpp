#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newLine "\n"

void solveTestCase()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int cnt = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        while (v[i] >= v[i + 1] && v[i] > 0)
        {
            v[i] = v[i] / 2;
            cnt++;
        }
        if (v[i] == v[i + 1])
        {
            cout << "-1" << newLine;
            return;
        }
    }
    cout << cnt << newLine;
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
//Time Complexity: O(nlogn)
//Problem link: https://codeforces.com/contest/1675/problem/B