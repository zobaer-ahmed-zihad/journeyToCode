#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{
    int G = __gcd(a, b);
    return G;
}
void zihad_solve()
{
    int n;
    cin >> n;
    vector<int> v(10001, -1);
    int maximum = -1;
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        v[val] = i;
    }

    for (int i = 1; i <= 1000; i++)
    {
        if (v[i] == -1)
            continue;
        for (int j = 1; j <= 1000; j++)
        {
            if (v[j] == -1)
                continue;
            if (__gcd(i, j) == 1)
            {
                maximum = max(maximum, v[i] + v[j]);
            }
        }
    }
    cout << maximum << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        zihad_solve();
    }
    return 0;
}