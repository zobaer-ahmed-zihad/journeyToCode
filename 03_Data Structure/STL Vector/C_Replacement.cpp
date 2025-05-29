// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        int val;
        if (v[i] < 0)
        {
            replace(v.begin(), v.end(), v[i], 2);
        }
        else if (v[i] > 0)
        {
            replace(v.begin(), v.end(), v[i], 1);
        }
    }

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}