#include <bits/stdc++.h>
using namespace std;
main()
{
    int t, x, y, z;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z;
        x - y == y - z ? cout << 0 << '\n' : cout << 1 << '\n';
    }
}