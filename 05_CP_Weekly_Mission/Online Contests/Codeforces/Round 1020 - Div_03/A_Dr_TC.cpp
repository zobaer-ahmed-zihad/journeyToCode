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
        int cnt = 0;
        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] == '1')
                cnt++;
        }
        int total = cnt * (n - 1) + (n - cnt);
        cout << total << "\n";
    }
    return 0;
}