#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s.insert(val);
    }
    int ans = n / 2;
    if (n % 2 == 0)
    {
        if (ans >= s.size())
        {
            cout << '0' << "\n";
        }
        else 
            cout<<"NO"<<'\n';
    }
    else 
        cout<<"NO"<<'\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}