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
int dis[1005];
int n, e;
vector<Edge> edge_list;
bool cycle = false;
void bellman_ford(int src)
{
    for (int i = 1; i <= n - 1; i++)
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
        int u, v;
        long long int w;
        cin >> u >> v >> w;
        edge_list.push_back(Edge(u, v, w));
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }
    int src;
    cin >> src;
    dis[src] = 0;
    bellman_ford(src);

    if (cycle)
    {
        cout << "Negative Cycle Detected";
    }
    else
    {
        int t;
        cin >> t;
        while (t--)
        {
            int d;
            cin >> d;
            // if (dis[d] == INT_MAX)
            //     cout << "Not Possible" << endl;
            // else
            //     cout << dis[d] << endl;
            if (dis[d] != INT_MAX)
                cout << dis[d] << endl;
            else
                cout << "Not Possible" << endl;
        }
    }

    return 0;
}