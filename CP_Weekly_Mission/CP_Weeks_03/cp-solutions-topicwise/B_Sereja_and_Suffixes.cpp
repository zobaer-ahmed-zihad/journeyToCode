
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    int count[n + 1];
    set<int> s;
    for (int i = n; i >= 0; i--)
    {
        s.insert(v[i]);
        int cnt = s.size();
        count[i] = cnt;
    }
    for (int i = 1; i <= m; i++)
    {
        int pos;
        cin>>pos;
        cout<<count[pos]<<"\n";
    }
    return 0;
}
//problem link: https://codeforces.com/problemset/problem/368/B