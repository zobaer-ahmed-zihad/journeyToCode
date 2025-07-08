#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int min_operations(string st, string value)
{
    int operations = 0;
    int checker = value.size() - 1;
    for (int i = st.size() - 1; i >= 0; i--)
    {
        if (st[i] == value[checker])
        {
            checker--;
            if (checker < 0)
                break;
        }
        else
            operations++;
    }
    if (checker >= 0)
        operations = INT_MAX;

    return operations;
}
void solveTestCase()
{
    string st;
    cin >> st;
    vector<string> values = {"00", "25", "50", "75"};
    int ans = INT_MAX;
    for (auto value : values)
    {
        ans = min(ans, min_operations(st, value));
    }
    cout << ans << '\n';
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
//Time complexity - O(logn)
//Problem link: https://codeforces.com/contest/1593/problem/B