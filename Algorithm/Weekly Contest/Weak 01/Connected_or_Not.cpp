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
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a][b] = 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int i, j;
        cin >> i >> j;
        (adj[i][j] == 1) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}