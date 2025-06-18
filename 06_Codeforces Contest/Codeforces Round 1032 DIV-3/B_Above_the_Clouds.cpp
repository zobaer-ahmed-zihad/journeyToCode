#include <bits/stdc++.h>
using namespace std;
void zihad_solve()
{
    int n;
    cin >> n;
    string st;
    cin >> st;
    map<char, int> mp;
    //BEST APPROACH 
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        mp[st[i]]++;
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (mp[st[i]] > 1)
        {
            found = true;
            break;
        }
    }
    (found) ? cout << "Yes" << '\n' : cout << "No" << '\n';

    //ANOTHER APPROACH 
    // char first = st[0], last = st[n - 1];
    // bool found = false;
    // for (int i = 1; i < st.size() - 1; i++)
    // {
    //     if (st[i] == first || st[i] == last)
    //     {
    //         found = true;
    //         break;
    //     }
    //     else if (mp.find(st[i]) != mp.end())
    //     {
    //         found = true;
    //         break;
    //     }
    //     else if (mp.find(st[i]) == mp.end())
    //         mp.insert({st[i], 1});
    // }
    // (found) ? cout << "Yes" << '\n' : cout << "No" << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        zihad_solve();
    }
    return 0;
}