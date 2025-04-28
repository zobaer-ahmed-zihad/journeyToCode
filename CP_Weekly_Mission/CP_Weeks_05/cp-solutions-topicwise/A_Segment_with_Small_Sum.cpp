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
    {
        cin >> ar[i];
    }
    ll l = 0, r = 0, sum = 0, max_lenght = 0;
    while (r < n)
    {
        sum += ar[r];
        if (sum <= k)
            max_lenght = max(max_lenght, r - l + 1);
        else
        {
            sum -= ar[l];
            l++;
        }
        r++;
    }
    cout<<max_lenght;
    return 0;
}
//problem link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A