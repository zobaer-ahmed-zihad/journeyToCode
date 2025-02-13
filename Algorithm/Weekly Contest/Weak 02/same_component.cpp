#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int n, m;
char grid[N][N];
vector<pair<int, int>> path = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
bool isValid(int i, int j)
{
    return ((i >= 0 && i < n) && (j >= 0 && j < m));
}
bool vis[N][N];
void DFS(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + path[i].first;
        int cj = sj + path[i].second;

        if (isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.')
        {
            DFS(ci, cj);
        }
    }
}
int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;

    DFS(si, sj);
    (vis[di][dj]) ? cout << "YES" : cout << "NO";

    return 0;
}