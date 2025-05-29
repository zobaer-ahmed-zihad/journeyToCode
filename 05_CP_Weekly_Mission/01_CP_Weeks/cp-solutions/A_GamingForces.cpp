#include <bits/stdc++.h>
using namespace std;
void solve(int ar[], int n)
{
    sort(ar, ar + n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == 1)
        {
            count++;
            ar[i]--;
            ar[i + 1]--;
        }
        else if (ar[i] > 1)
        {
            count++;
        }
    }
    cout << count << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        solve(ar, n);
    }

    return 0;
}
//problem link: https://codeforces.com/contest/1792/problem/A