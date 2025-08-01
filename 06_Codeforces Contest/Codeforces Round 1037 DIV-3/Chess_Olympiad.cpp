#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    float t1 = x + 0.5 * y + 4 - (x + y + z);
    float t2 = 0.5 * y + z;

    (t1 > t2) ? cout << "Yes" << '\n' : cout << "No" << '\n';
    return 0;
}