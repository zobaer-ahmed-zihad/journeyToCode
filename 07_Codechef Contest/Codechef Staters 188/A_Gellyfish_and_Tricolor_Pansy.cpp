#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b == 1 || d == 1)
        cout << "Gellyfish" << '\n';
    else if (a == 1 || c == 1)
        cout << "Flower" << '\n';
    else
    {
        ll g = min(a, c);
        ll f = min(b, d);

        if (g >= f)
            cout << "Gellyfish" << '\n';
        else
            cout << "Flower" << '\n';
    }
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