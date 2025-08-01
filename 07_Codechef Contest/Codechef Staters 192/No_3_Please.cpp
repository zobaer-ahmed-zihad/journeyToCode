#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }
    bool found = false;
    for (auto val : pre)
    {
        if (val % 3 == 0)
        {
            found = true;
            break;
        }
    }
    (found) ? cout << "No" << '\n' : cout << "Yes" << '\n';
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