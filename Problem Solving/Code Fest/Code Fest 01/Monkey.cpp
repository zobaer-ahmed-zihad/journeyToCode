#include <bits/stdc++.h>
using namespace std;
int main()
{
    int fre[29];
    string st;
    for (int i = 0; i < 29; i++)
    {
        st[i] = 0;
    }
    while (getline(cin, st))
    {
        for (int i = 0; i < st.size(); i++)
        {
            // cout << st[i] - 97 << endl;
            fre[st[i] - 97]++;
        }
    }

    for (int i = 0; i < 29; i++)
    {
        cout << fre[i] << endl;
    }

    return 0;
}