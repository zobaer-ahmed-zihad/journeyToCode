#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];

void DFS(int src)
{
    vis[src] = true;
    cout << src << endl;
    for (int i = 0; i < v[src].size(); i++)
    {
        int child = v[src][i];
        if (vis[child] == false)
        {
            DFS(child);
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }
    DFS(1);

    return 0;
}