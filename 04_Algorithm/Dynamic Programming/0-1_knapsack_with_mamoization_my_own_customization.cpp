#include <bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int knapsack(int items, int max_capacity, int val[], int weight[])
{
    // base case
    if (items == 0 || max_capacity == 0)
        return 0;
    if (dp[items][max_capacity] != -1)
        return dp[items][max_capacity];
    if (weight[items] <= max_capacity)
    {
        int op1 = knapsack(items - 1, max_capacity - weight[items], val, weight) + val[items];
        int op2 = knapsack(items - 1, max_capacity, val, weight);
        return dp[items][max_capacity] = max(op1, op2);
    }
    else
    {
        return dp[items][max_capacity] = knapsack(items - 1, max_capacity, val, weight);
    }
}
int main()
{
    int items;
    cin >> items;
    int val[items], weight[items];
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < items; i++)
        cin >> val[i];

    for (int i = 0; i < items; i++)
        cin >> weight[i];

    int max_capacity;
    cin >> max_capacity;

    int maxSize = knapsack(items - 1, max_capacity, val, weight);
    cout << maxSize;

    return 0;
}