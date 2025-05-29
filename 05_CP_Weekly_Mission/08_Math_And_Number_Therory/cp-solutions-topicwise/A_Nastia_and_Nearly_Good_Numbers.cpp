#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// int LCM(int a, int b)
// {
//     int G = __gcd(a, b);
//     return (a / G) * b;
// }
void zihad_solve()
{
    int a, b;
    cin >> a >> b;
    if (b == 1)
        cout << "NO" << '\n';
    else
    {
        cout << "YES" << '\n';
        cout << a << " " << a * (long long)b << " " << a * (long long)(b + 1) << endl;
    }

    // ll goodInt = LCM(a, b);
    // if (b == 1)
    //     cout << "NO" << endl;
    // else
    // {
    //     cout << "YES" << endl;
    //     cout << a << " " << goodInt << " " << goodInt + a << endl;
    // }
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

//problem link: https://codeforces.com/problemset/problem/1521/A