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
        bool flag = true;
        int s_1_cnt = 0, t_1_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (st1[i] == '1')
                s_1_cnt++;
            if (st2[i] == '1')
                t_1_cnt++;
        }
        if (s_1_cnt < t_1_cnt)
            flag = false;
        if ((s_1_cnt - t_1_cnt) % 2 != 0)
            flag = false;

        for (int i = 0; i < n; i++)
        {
            if (st1[i] == '0' && st2[i] == '1')
            {
                flag = false;
                break;
            }
        }
        (flag) ? cout << "Yes" << '\n' : cout << "No" << '\n';
    }

    return 0;
}