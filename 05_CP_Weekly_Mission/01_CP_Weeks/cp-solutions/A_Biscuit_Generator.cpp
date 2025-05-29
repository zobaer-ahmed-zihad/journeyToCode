#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, t;
    cin >> a >> b >> t;
    t = t + .5;
    if (a <= t)
    {
        int time = t / a;
        int totalBiscuits = time * b;
        cout << totalBiscuits;
    }
    else
        cout << "0";

    return 0;
}

//Problem Link: https://atcoder.jp/contests/abc125/tasks/abc125_a?lang=en