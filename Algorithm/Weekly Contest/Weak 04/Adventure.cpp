#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int knapsack(int n, int s, int v[], int w[])
{
    // base case
    if (n == 0 || s == 0)
        return 0;
    if (dp[n - 1][s] != -1)
        return dp[n][s];
    if (w[n - 1] <= s)
    {
        int op1 = knapsack(n - 1, s - w[n], v, w) + v[n];
        int op2 = knapsack(n - 1, s, v, w);
        return dp[n][s] = max(op1, op2);
    }
    else
    {
        return dp[n][s] = knapsack(n - 1, s, v, w);
    }
}
int main()
{
    /*
    n = item
    s = size
    v = value
    w = weight
    */
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int v[n], w[n];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                dp[i][j] = -1;
            }
        }

        for (int i = 0; i < n; i++)
            cin >> w[i];

        for (int i = 0; i < n; i++)
            cin >> v[i];

        int maxSize = knapsack(n, s, v, w);
        cout << maxSize << endl;
    }

    return 0;
}