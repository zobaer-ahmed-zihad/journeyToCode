#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string st;
        cin >> st;
        ll initial_sum = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (st[i] == 'L')
            {
                initial_sum += i;
                ll l = i;
                ll r = (n - 1) - i;
                if (l < r)
                {
                    v.push_back(r - l);
                }
            }
            else if (st[i] == 'R')
            {
                initial_sum += n - 1 - i;
                ll l = i;
                ll r = (n - 1) - i;
                if (r < l)
                {
                    v.push_back(l - r);
                }
            }
        }
        sort(v.rbegin(), v.rend());
        ll sum = initial_sum;
        for (int i = 0; i < v.size(); i++)
        {
            sum += v[i];
            cout << sum << " ";
        }
        for (int i = v.size(); i < n; i++)
        {
            cout << sum << " ";
        }
        cout << endl;
    }

    return 0;
}
//problem link: https://codeforces.com/problemset/problem/1722/D