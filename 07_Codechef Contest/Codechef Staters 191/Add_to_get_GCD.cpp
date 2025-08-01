#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{
    return __gcd(a, b);
}
void zihad_solve()
{
    long long int x, y;
    cin >> x >> y;
    if (GCD(x, y) > 1)
        cout << "0" << '\n';
    else if (GCD(x + 1, y) > 1 || GCD(x, y + 1) > 1)
        cout << "1" << '\n';
    else
        cout << "2" << '\n';
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