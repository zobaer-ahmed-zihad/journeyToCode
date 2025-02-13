//Problem link: https://cses.fi/problemset/task/1666/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
bool vis[N];
vector<int> adj_list[N];
vector<int> number_of_roads;
void DFS(int src)
{
    vis[src] = true;
    for (int child : adj_list[src])
    {
        if (!vis[child])
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
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int count_cities = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            DFS(i);
            number_of_roads.push_back(i);
            count_cities++;
        }
    }

    cout << count_cities - 1 << endl;
    for (int i = 0; i < count_cities - 1; i++)
    {
        cout << number_of_roads[i] << " " << number_of_roads[i + 1] << endl;
    }

    return 0;
}