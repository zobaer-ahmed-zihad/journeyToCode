#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    string st;
    cin >> st;
    int n = st.size();
    if (st[0] == st[n - 1])
        cout << st << '\n';
    else
    {
        if (st[0] == 'a')
            st[0] = 'b';
        else
            st[0] = 'a';
        cout << st << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solveTestCase();
    }
    return 0;
}
//Time complexity - O(n)
//Problem link: https://codeforces.com/problemset/problem/1606/A