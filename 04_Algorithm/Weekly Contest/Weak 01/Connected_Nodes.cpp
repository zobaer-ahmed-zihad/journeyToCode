#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj[n];

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int q;
    cin >> q;
    while (q--)
    {
        vector<int> v;
        int i;
        cin >> i;
        if (adj[i].size() == 0)
        {
            cout << "-1";
        }
        else
        {
            for (int val : adj[i])
            {
                v.push_back(val);
            }
        }
        sort(v.begin(), v.end(), greater<>());
        for (int val : v)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}