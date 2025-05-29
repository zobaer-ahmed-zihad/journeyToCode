#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k;
    cin >> n >> k;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    ll l = 0, r = 0, sum = 0, max_sum = 0;
    while (r < n)
    {
        sum += ar[r];
        if (sum <= k)
        {
            max_sum = max(max_sum, sum);
            r++;
        }
        else
        {
            sum -= ar[l];
            l++;
        }
    }
    cout << max_sum << '\n';

    return 0;
}