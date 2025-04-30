#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    if (n % 3 == 0)
    {
        cout << n << '\n';
    }
    else if (n % 3 == 1)
    {
        cout << n - 1 << '\n';
    }
    else if (n % 3 == 2)
    {
        cout << n + 1 << '\n';
    }

    return 0;
}