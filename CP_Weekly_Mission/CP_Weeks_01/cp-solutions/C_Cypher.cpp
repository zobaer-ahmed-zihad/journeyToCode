#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        if (b == 0)
        {
            continue;
        }
        string st;
        cin >> st;
        for (int j = 0; j < st.size(); j++)
        {
            if (st[j] == 'D')
                ar[i]++;
            else if (st[j] == 'U')
                ar[i]--;
            if (ar[i] < 0)
                ar[i] = ar[i] + 10;
            if (ar[i] > 9)
                ar[i] = ar[i] - 10;
        }
        }
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
//problem link: https://codeforces.com/contest/1703/problem/C