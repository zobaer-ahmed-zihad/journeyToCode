#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> adj_list[n];
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Node " << i << " -> ";
        for (pair<int, int> child : adj_list[i])
        {
            cout << "{"<<child.first << " " << child.second << "} ";
        }
        cout << endl;
    }
    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<adj_list[i].size(); j++)
    //     {
    //         pair<int, int> child = adj_list[i][j];
    //         cout<<child.first<<" "<<child.second<<endl;
    //     }
    // }


    return 0;
}