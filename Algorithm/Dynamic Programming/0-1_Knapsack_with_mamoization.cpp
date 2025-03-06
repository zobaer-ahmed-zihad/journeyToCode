#include <bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int knapsack(int n, int s, int v[], int w[])
{
    // base case
    if (n == 0 || s == 0)
        return 0;
    if (dp[n][s] != -1)
        return dp[n][s];
    if (w[n] <= s)
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
    int n;
    cin >> n;
    int v[n], w[n];
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
        cin >> w[i];

    int s;
    cin >> s;

    int maxSize = knapsack(n - 1, s, v, w);
    cout << maxSize;

    return 0;
}