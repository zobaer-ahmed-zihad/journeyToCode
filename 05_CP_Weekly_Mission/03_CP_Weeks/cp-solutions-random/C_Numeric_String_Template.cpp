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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int m;
        cin >> m;
        while(m--)
        {
            string st;
            cin >> st;

            map<int, char> mp;
            map<char, int> mp2;

            bool flag = true;
            if (n != st.size())
            {
                flag = false;
            }
            else
            {
                for (int i = 0; i < st.size(); i++)
                {
                    if (mp2.find(st[i]) != mp2.end())
                    {
                        if(v[i] != mp2[st[i]])
                        {
                            flag = false;
                            break;
                        }
                    }
                    else
                    {
                        mp.insert({v[i], st[i]});
                        mp2.insert({st[i], v[i]});
                    }
                }
            }
            (flag == true) ? cout << "YES" << '\n' : cout << "NO" << '\n';
        }
    }
    return 0;
}