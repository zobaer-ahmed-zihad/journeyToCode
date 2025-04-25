#include <bits/stdc++.h>
using namespace std;
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
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }
        int l = 0, r = n - 1;
        int min = 1, max = n;

        while (l <= r)
        {
            if (v[l] == min)
            {
                min++;
                l++;
            }
            else if (v[l] == max)
            {
                max--;
                l++;
            }
            else if (v[r] == min)
            {
                min++;
                r--;
            }
            else if (v[r] == max)
            {
                max--;
                r--;
            }
            else
                break;
        }
        (l <= r) ? cout << l + 1 << " " << r + 1 << '\n' : cout << "-1" << '\n';
    }

    return 0;
}
//problem link: https://codeforces.com/contest/1793/problem/C