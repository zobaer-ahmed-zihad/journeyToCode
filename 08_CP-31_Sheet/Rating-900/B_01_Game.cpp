#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    string st;
    cin >> st;

    int oneCnt = 0, zeroCnt = 0, max_pairs = 0;
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == '1')
            oneCnt++;
        else
            zeroCnt++;
    }

    max_pairs = min(oneCnt, zeroCnt);
    if (oneCnt == 0 || zeroCnt == 0)
    {
        cout << "NET" << '\n';
    }
    else if (max_pairs % 2 == 1)
    {
        cout << "DA" << '\n';
    }
    else
        cout << "NET" << '\n';
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

//Problem link: https://codeforces.com/problemset/problem/1373/B
//Time complexity: O(n)