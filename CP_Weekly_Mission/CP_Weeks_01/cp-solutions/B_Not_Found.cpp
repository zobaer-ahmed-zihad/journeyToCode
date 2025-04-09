#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string st;
    cin >> st;
    int fre[26] = {0};
    for (int i = 0; i < st.size(); i++)
    {
        fre[st[i] - 97]++;
    }
    bool flag = true;
    for (int i = 0; i < st.size(); i++)
    {
        if (fre[i] == 0)
        {
            cout << char(i + 97);
            break;
        }
    }
    

    return 0;
}