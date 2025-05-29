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
        string st;
        cin >> st;
        int l = 0, r = n - 1, minimum_length = n;
        while (l <= r)
        {
            if (st[l] == st[r])
            {
                break;
            }
            else
            {
                minimum_length -= 2;
                l++;
                r--;
            }
        }
        cout << minimum_length << '\n';

        // while (l <= r)
        // {
        //     if (st[l] == st[r])
        //     {
        //         cout << (r - l) + 1 << '\n';
        //         break;
        //     }
        //     else if ((st[l] == '0' && st[r] == '1') || (st[l] == '1' && st[r] == '0'))
        //     {
        //         l++;
        //         r--;
        //     }
        // }
        // if (l > r)
        //     cout << "0" << '\n';
    }
    return 0;
}
// problem link: https://codeforces.com/contest/1791/problem/C