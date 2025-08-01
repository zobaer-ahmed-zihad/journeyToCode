#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    int d, x, y;
    cin >> d >> x >> y;
    int sessions = 0;
    bool flag = false;
    while (y - sessions >= 0)
    {
        double discount = (x * (100 - d * sessions)) / 100.0;
        if (y - sessions >= discount)
        {
            flag = true;
            break;
        }
        sessions++;
    }
    (flag) ? cout << sessions << '\n' : cout << -1 << '\n';
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