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
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
        prefix_sum[i] = sum;
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
        }
        else
        {
            range_sum = prefix_sum[r] - prefix_sum[l - 1];
        }
        cout << range_sum << endl;
    }
 
    return 0;
}