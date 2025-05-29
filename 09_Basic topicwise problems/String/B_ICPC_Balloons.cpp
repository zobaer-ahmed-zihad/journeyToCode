//https://codeforces.com/contest/1703/problem/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int frq[26] = {0};
        int l;
        string st;
        cin >> l >> st;
        for (int j = 0; j < st.size(); j++)
        {
            if (frq[st[j] - 'A'] == 0)
            {
                frq[st[j] - 'A'] = frq[st[j] - 'A'] + 2;
            }
            else
            {
                frq[st[j] - 'A']++;
            }
        }
        int sum = 0;
        for (int j = 0; j < 26; j++)
        {
            if (frq[j] > 0)
            {
                sum = sum + frq[j];
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}