#include <bits/stdc++.h>
using namespace std;
const int N = 100;
vector<pair<int, int>> adj_list[N];
int dis[N];
bool vis[N];
int n, e;
void Dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src});
    dis[src] = 0;

    while (!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();
        int parentCost = parent.first;
        int parentNode = parent.second;

        if (vis[parentNode])
        {
            continue;
        }
        vis[parentNode] = true;

        for (pair<int, int> child : adj_list[parentNode])
        {
            int childNode = child.first;
            int childCost = child.second;

            if (parentCost + childCost < dis[childNode])
            {
                dis[childNode] = parentCost + childCost;
                pq.push({dis[childNode], childNode});
            }
        }
        // for (int i = 0; i < adj_list[parentNode].size(); i++)
        // {
        //     pair<int, int> child = adj_list[parentNode][i];
        //     int childNode = child.first;
        //     int childCost = child.second;

        //     if (parentCost + childCost < dis[childNode])
        //     {
        //         dis[childNode] = parentCost + childCost;
        //         pq.push({dis[childNode], childNode});
        //     }
        // }
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
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    Dijkstra(0);

    for (int i = 0; i < n; i++)
    {
        cout << "Node " << i << " -> " << dis[i] << endl;
    }

    return 0;
}