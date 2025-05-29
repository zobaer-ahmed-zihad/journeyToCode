#include <bits/stdc++.h>
using namespace std;
void zihad_solve()
{
    int n, m;
    cin >> n >> m;
    string st, subStr, newStr;
    cin >> st >> subStr;
    newStr = st;
    bool found = false;
    int operations = 0;
    for (int i = 1; i <= 6; i++)
    {
        if (newStr.find(subStr) != string::npos)
        {
            found = true;
            break;
        }
        else
        {
            newStr += newStr;
            operations++;
        }
    }
    (found) ? cout << operations << '\n' : cout << "-1" << '\n';
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