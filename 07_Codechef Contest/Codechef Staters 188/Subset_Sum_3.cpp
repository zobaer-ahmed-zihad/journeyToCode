#include <bits/stdc++.h>
using namespace std;
void solveTestCase()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int zero = 0, one = 0, two = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        int remainder = v[i] % 3;
        if (remainder == 0)
            zero++;
        else if (remainder == 1)
            one++;
        else
            two++;
    }

    if (zero >= 1 || one >= 3 || two >= 3 || (two >= 1 && one >= 1))
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
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