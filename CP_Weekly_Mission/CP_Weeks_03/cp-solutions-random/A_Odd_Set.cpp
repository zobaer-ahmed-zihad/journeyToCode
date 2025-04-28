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
        int oddCnt = 0, evenCnt = 0;
        for (int i = 0; i < n * 2; i++)
        {
            int val;
            cin >> val;
            if (val % 2 == 0)
                evenCnt++;
            else
                oddCnt++;
        }
        (oddCnt == evenCnt) ? cout << "Yes" << '\n' : cout << "No" << '\n';
    }

    return 0;
}
// problem link: https://codeforces.com/problemset/problem/1542/A