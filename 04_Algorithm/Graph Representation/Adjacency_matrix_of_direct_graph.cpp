#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, e;
    cin >> n >> e;
    int adj[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adj[i][j] = 0;
            if (i == j)
            {
                adj[i][j] = 1;
            }
        }
    }
    // memset(adj, 0, sizeof(adj));
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a][b] = 1;
        adj[b][a] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}