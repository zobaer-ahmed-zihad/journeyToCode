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
        // if (v[i] % 2 == 0)
        //     v[i] = 0;
        // else
        //     v[i] = 1;
    }
    ll cnt = 0;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (v[i] == v[i + 1])
    //         cnt++;
    // }
    // SECOND IMPLEMENTATION APPROACH
    for (int i = 0; i < n - 1; i++)
    {
        if ((v[i] % 2) == (v[i + 1] % 2))
            cnt++;
    }
    cout << cnt << '\n';
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
//Time complexity: O(n)
//problem link: https://codeforces.com/contest/1777/problem/A