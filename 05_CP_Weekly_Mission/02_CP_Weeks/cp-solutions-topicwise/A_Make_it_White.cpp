#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    string st;
    cin >> st;
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == 'B')
            v.push_back(i);
    }
    int min_value = *min_element(v.begin(), v.end());
    int max_value = *max_element(v.begin(), v.end());

    cout << max_value - min_value + 1 << endl;
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
//problem link: https://codeforces.com/problemset/problem/1927/A