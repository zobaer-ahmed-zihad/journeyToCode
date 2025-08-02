#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    string s, t;
    cin >> s >> t;
    vector<int> fre(26, 0);
    deque<char> dq;
    for (int i = 0; i < t.size(); i++)
    {
        fre[t[i] - 'A']++;
    }
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (fre[s[i] - 'A'] > 0)
        {
            dq.push_front(s[i]);
            fre[s[i] - 'A']--;
        }
    }
    string st = "";
    for (auto ch : dq)
        st += ch;
    (st == t) ? cout << "YES" << '\n' : cout << "NO" << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solveTestCase();
    }
    return 0;
}

//problem link: https://codeforces.com/contest/1666/problem/D
//Complexity: O(n)