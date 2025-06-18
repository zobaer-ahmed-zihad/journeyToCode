#include <bits/stdc++.h>
using namespace std;
void solaeTestCase()
{
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //FIRST APPROACH 
    // int op1 = abs(s - a[0]) + abs(a[n - 1] - a[0]);
    // int op2 = abs(s - a[n - 1]) + abs(a[n - 1] - a[0]);
    // cout << min(op1, op2) << '\n';

    //SECOND APPROACH
    int mn = min(abs(s - a[0]), abs(s - a[n - 1]));
    int ans = mn + (a[n - 1] - a[0]);
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solaeTestCase();
    }
    return 0;
}