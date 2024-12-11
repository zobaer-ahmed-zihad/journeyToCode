// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, pair;
    cin >> n >> pair;
    long long ar[n], prefix_sum[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    // long long int sum = 0;
    for (int i = 1; i < n; i++)
    {
        // sum += ar[i];
        // prefix_sum[i] = sum;

        // or
        prefix_sum[0] = ar[0];
        prefix_sum[i] = ar[i] + prefix_sum[i - 1];
    }
    while (pair--)
    {
        long long int l, r;
        cin >> l >> r;
        l--; // Match with index
        r--;
        long long int range_sum = 0;

        if (l == 0)
        {
            range_sum = prefix_sum[r];
            ;
        }
        else
        {
            range_sum = prefix_sum[r] - prefix_sum[l - 1];
        }
        cout << range_sum << endl;
    }

    return 0;
}