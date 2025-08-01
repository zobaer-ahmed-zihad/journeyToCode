#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    ll l = 0, r = 0, number_of_pairs = 0;

    while (l < n && r < m)
    {
        ll curr = a[l];
        ll cnt1 = 0, cnt2 = 0;
        while (l < n && curr == a[l])
        {
            cnt1++, l++;
        }
        while (r < m && curr > b[r])
        {
            r++;
        }
        while (r < m && curr == b[r])
        {
            cnt2++, r++;
        }
        number_of_pairs += (1LL * cnt1 * cnt2);
    }
    cout << number_of_pairs << '\n';

    return 0;
}

//problem link: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C
//Complexity - O(n)