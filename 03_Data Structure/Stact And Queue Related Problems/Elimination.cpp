#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> st;
    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;

        for (char c : s)
        {
            if (c == '1')
            {
                if (st.empty())
                {
                    st.push(c);
                }
                else if (st.top() == '0')
                {
                    st.pop();
                }
                else
                {
                    st.push(c);
                }
            }
            else if (c == '0')
            {
                if (st.empty())
                {
                    st.push(c);
                }
                else
                {
                    st.push(c);
                }
            }
        }
        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        while (!st.empty())
        {
            st.pop();
        }
    }

    return 0;
}