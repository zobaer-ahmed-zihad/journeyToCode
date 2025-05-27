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
        long long int n;
        cin >> n;
        int cnt = 1;
        while (true)
        {
            if (n < 4)
                break;
            n = n / 4;
            cnt = cnt * 2;
        }
        cout << cnt << '\n';
    }

    return 0;
}
//problem link: https://codeforces.com/problemset/problem/2043/A