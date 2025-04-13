#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int owe;
        cin >> owe;
        cout << ((100 - owe) / 10 * 10) << endl;
    }
    return 0;
}
// problem link: https://www.codechef.com/problems/CHANGE_PLZ