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
        string st;
        cin >> st;
        bool unique_char = true;
        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] == st[i + 1])
            {
                unique_char = false;
                if (st[i] == 'z')
                {
                    st.insert(i + 1, 1, 'a');
                    break;
                }
                else
                {
                    st.insert(i + 1, 1, 'z');
                    break;
                }
            }
        }
 
        if (unique_char)
        {
            (st[0] == 'a') ? cout << "z" << st << "\n" : cout << "a" << st << "\n";
        }
        else
        {
            cout << st << '\n';
        }
    }
 
    return 0;
}
//problem link: https://codeforces.com/contest/1997/problem/A