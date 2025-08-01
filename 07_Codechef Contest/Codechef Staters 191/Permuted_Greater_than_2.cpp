#include <bits/stdc++.h>
using namespace std;
void zihad_solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == 0 && c >= 1)
    {
        cout << "Yes" << endl;
    }
    else if (c == 0 && a == 0 && b >= 2)
    {
        cout << "Yes" << '\n';
    }
    else if (c == 0)
    {
        cout << "No" << endl;
    }
    else if (a <= c + 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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
        zihad_solve();
    }
    return 0;
}