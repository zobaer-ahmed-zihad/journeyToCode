#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string st1, st2;
        cin >> st1 >> st2;

        sort(st1.begin(), st1.end());
        sort(st2.begin(), st2.end());

        (st1 == st2) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}