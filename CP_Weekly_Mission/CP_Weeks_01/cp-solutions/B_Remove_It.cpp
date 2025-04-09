#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long int x;
    cin >> n >> x;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (val != x)
            v.push_back(val);
    }
    for (int i : v)
        cout << i << " ";

    return 0;
}
//problem link: https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en