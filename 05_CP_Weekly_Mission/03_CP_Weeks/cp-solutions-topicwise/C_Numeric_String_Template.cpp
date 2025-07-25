#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int m;
        cin >> m;
        while (m--)
        {
            string st;
            cin >> st;

            map<char, int> mp;
            map<int, char> mps;

            bool flag = true;
            if (n != st.size())
            {
                flag = false;
            }
            else
            {
                for (int i = 0; i < st.size(); i++)
                {
                    if (mp.find(st[i]) != mp.end() && mp[st[i]] != v[i])
                    {
                        flag = false;
                        break;
                    }
                    else if (mps.find(v[i]) != mps.end() && mps[v[i]] != st[i])
                    {
                        flag = false;
                        break;
                    }
                    else
                    {
                        mps.insert({v[i], st[i]});
                        mp.insert({st[i], v[i]});
                    }
                }
            }
            (flag == true) ? cout << "YES" << '\n' : cout << "NO" << '\n';
        }
    }
    return 0;
}
//problem link: https://codeforces.com/problemset/problem/2000/C