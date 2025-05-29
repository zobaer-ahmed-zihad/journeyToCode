#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string st;
    cin >> st;
    sort(st.begin(), st.end());
    int fre[26] = {0};
    for (int i = 0; i < st.size(); i++)
    {
        fre[st[i] - 97]++;
    }
    bool flag = false;
    for (int i = 0; i <26; i++)
    {
        if (fre[i] == 0)
        {
            cout << char(i + 97);
            flag = true;
            break;
        }
    }
    if (!flag)
        cout << "None";

    return 0;
}

//Problem Link: https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en