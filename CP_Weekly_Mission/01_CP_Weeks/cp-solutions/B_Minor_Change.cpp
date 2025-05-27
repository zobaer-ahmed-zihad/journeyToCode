#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string st1, st2;
    cin >> st1 >> st2;
    int count = 0;
    for (int i = 0; i < st1.size(); i++)
    {
        if (st1[i] != st2[i])
            count++;
    }
    cout << count;

    return 0;
}
//problem link:https://atcoder.jp/contests/abc172/tasks/abc172_b