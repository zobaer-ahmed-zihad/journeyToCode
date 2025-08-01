#include <bits/stdc++.h>
using namespace std;
void solveTestCase()
{
    int n;
    cin >> n;
    vector<int> p(n), q(n), ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
    }

    ans[0] = pow(2, p[0]) + pow(2, q[0]);
    
    for (int i = 1; i < 2; i++)
    {
        ans[i] = max((pow(2, p[0] + pow(2, q[i]))), (pow(2, p[1] + pow(2, q[i - 1]))));
    }
    cout << ans[1];
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