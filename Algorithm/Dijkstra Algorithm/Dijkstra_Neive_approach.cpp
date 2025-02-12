#include <bits/stdc++.h>
using namespace std;

const int N = 100;
vector<pair<int, int>> adj_list[N];
int dis[N];
int n, e;
void Dijkstra(int src)
{
    queue<int> q;
    q.push(src);
    dis[src] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (pair<int, int> child : adj_list[parent])
        {
            int childNode = child.first;
            int childCost = child.second;

            if (dis[parent] + childCost < dis[childNode])
            {
                dis[childNode] = dis[parent] + childCost;
                q.push(childNode);
            }
        }
    }
}
int main()
{
    cin >> n >> e;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }
    Dijkstra(1);

    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << " -> " << dis[i] << endl;
    }

    return 0;
}