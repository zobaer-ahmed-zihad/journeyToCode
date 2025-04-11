#include <bits/stdc++.h>
using namespace std;
void solve(string st, int k)
{
    int fre[26] = {0};
    for (int i = 0; i < st.size(); i++)
    {
        fre[st[i] - 97]++;
    }
    int oddCharCount = 0;
    for (int i = 0; i < 26; i++)
    {
        if (fre[i] % 2 == 1)
        {
            oddCharCount++;
        }
    }
    (k < oddCharCount - 1) ? cout << "NO" << endl : cout << "YES" << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string st;
        cin >> st;
        solve(st, k);
    }

    return 0;
}
//problem link: https://codeforces.com/problemset/problem/1883/B