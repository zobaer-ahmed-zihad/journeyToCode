#include <bits/stdc++.h>
using namespace std;
void zihad_solve()
{
    int n;
    cin >> n;
    int oddCnt = 0, evenCnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int hours;
        cin >> hours;
        if (i % 2 == 0)
        {
            evenCnt += hours;
        }
        else
        {
            oddCnt += hours;
        }
    }

    cout << max(evenCnt, oddCnt) << '\n';
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