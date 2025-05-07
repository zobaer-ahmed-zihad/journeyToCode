#include <bits/stdc++.h>
using namespace std;
void zihad_solve()
{
    int n;
    cin >> n;
    string st;
    cin >> st;
    int dotCnt = 0, hashCnt = 0;
    bool flag = false;
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == '.')
        {
            dotCnt++;
            if (dotCnt > 2)
            {
                flag = true;
                break;
            }
        }
        else
        {
            hashCnt++;
            dotCnt = 0;
        }
    }
    (flag) ? cout << "2" << '\n' : cout << st.size() - hashCnt << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        zihad_solve();
    }

    return 0;
}
//problem link: https://codeforces.com/problemset/problem/1900/A