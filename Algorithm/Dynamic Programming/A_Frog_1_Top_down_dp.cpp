//https://atcoder.jp/contests/dp/tasks/dp_a
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int dp[N];
int solve(int ar[], int n)
{
    if (n == 1)
    {
        return dp[n] = 0;
    }
    if (dp[n] != -1)
        return dp[n];

    else if (n == 2)
    {
        return dp[n] = abs(ar[n] - ar[n - 1]);
    }
    else
    {
        int choise1 = solve(ar, n - 1) + abs(ar[n] - ar[n - 1]);
        int choise2 = solve(ar, n - 2) + abs(ar[n] - ar[n - 2]);

        return dp[n] = min(choise1, choise2);
    }
}
int main()
{
    int n;
    cin >> n;
    int ar[n + 1];
    for (int i = 1; i <= n; i++)
    {
        dp[i] = -1;
        cin >> ar[i];
    }
    int minimumCost = solve(ar, n);
    cout << minimumCost << endl;

    return 0;
}