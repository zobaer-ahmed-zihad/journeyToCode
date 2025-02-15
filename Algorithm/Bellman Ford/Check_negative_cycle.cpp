#include <bits/stdc++.h>
using namespace std;
class Edges
{
public:
    int u;
    int v;
    int w;
    Edges(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
int dis[100];
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edges> v;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        Edges ed(a, b, c);
        v.push_back(ed);
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[1] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        // for (int j = 0; j < v.size(); j++)
        // {
        //     Edges ed = v[j];
        //     int u = ed.u;
        //     int v = ed.v;
        //     int w = ed.w;

        //     if (dis[u] + w < dis[v])
        //     {
        //         dis[v] = dis[u] + w;
        //     }
        // }

        for (Edges ed : v)
        {
            int u = ed.u;
            int v = ed.v;
            int w = ed.w;

            if (dis[u] + w < dis[v])
            {
                dis[v] = dis[u] + w;
            }
        }
    }
    bool cycle = false;
    for (Edges ed : v)
    {
        int u = ed.u;
        int v = ed.v;
        int w = ed.w;

        if (dis[u] + w < dis[v])
        {
            cycle = true;
            break;
            dis[v] = dis[u] + w;
        }
    }
    if (cycle)
    {
        cout << "Cycle Detected";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cout << "Node " << i << " - " << dis[i] << endl;
        }
    }

    return 0;
}