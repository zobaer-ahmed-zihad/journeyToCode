#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
int dis[1000];
int n, e;
vector<Edge> edge_list;
bool cycle = false;
void bellman_ford()
{
    for (int i = 0; i < n - 1; i++)
    {
        for (auto edge : edge_list)
        {
            int u = edge.u;
            int v = edge.v;
            int w = edge.w;
            if (dis[u] != INT_MAX && dis[u] + w < dis[v])
            {
                dis[v] = dis[u] + w;
            }
        }
    }
    for (auto edge : edge_list)
    {
        int u = edge.u;
        int v = edge.v;
        int w = edge.w;
        if (dis[u] != INT_MAX && dis[u] + w < dis[v])
        {
            cycle = true;
            break;
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
        edge_list.push_back(Edge(u, v, w));
        // edge_list.push_back(Edge(v, u, w)); // For undirected
    }

    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[0] = 0;
    bellman_ford();

    if (cycle)
    {
        cout << "Cycle Detected";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << i << " -> " << dis[i] << endl;
        }
    }

    return 0;
}