#include <bits/stdc++.h>
using namespace std;
int parent[1000];
void DSU_set(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
    }
}
int DSU_find(int node)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}
void DSU_union(int a, int b)
{
    int leaderA = DSU_find(a);
    int leaderB = DSU_find(b);

    if (leaderA != leaderB)
    {
        parent[leaderB] = leaderA;
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    DSU_set(n);
    while (e--)
    {
        int u, v;
        cin >> u >> v;
        DSU_union(u, v);
    }
    cout << DSU_find(3);
    return 0;
}