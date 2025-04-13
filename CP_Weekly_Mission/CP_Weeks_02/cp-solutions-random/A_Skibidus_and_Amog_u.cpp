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
        string st;
        cin >> st;
        st.replace(st.size() - 2, 2, "i");
        cout << st << '\n';
    }

    return 0;
}
//problem link: https://codeforces.com/contest/2065/problem/A