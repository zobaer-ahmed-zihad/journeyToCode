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
        string st1, st2;
        cin >> st1 >> st2;
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (st1[i] == '0')
                    cnt1++;
                if (st2[i] == '0')
                    cnt2++;
            }
            else
            {
                if (st1[i] == '0')
                    cnt2++;
                if (st2[i] == '0')
                    cnt1++;
            }
        }
        if ((n+1) / 2 <= cnt1 && n / 2 <= cnt2)
        {
            cout << "YES" << "\n";
        }
        else
            cout << "NO" << '\n';
    }

    return 0;
}
//problem link: https://codeforces.com/contest/2092/problem/B