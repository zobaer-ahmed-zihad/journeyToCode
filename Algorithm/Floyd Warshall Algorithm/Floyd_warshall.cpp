#include <bits/stdc++.h>
using namespace std;
const int INF = 1e7;
int main()
{
    int n, e;
    cin >> n >> e;
    int dis[n + 5][n + 5];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dis[i][j] = INF;
            if (i == j)
            {
                dis[i][j] = 0;
            }
        }
    }
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        dis[u][v] = w;
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (dis[i][k] + dis[k][j] < dis[i][j])
                {
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (dis[i][j] == INT_MAX)
                cout << "IN" << " ";
            else
                cout << dis[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}