#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
bool vis[N][N];
int n, m;
vector<pair<int, int>> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool isValid(int si, int sj)
{
    return ((si >= 0 && si < n) && (sj >= 0 && sj < m));
}
// DFS
void DFS(int si, int sj)
{
    cout << si << " " << sj << endl;
    vis[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci, cj;
        ci = si + path[i].first;
        cj = sj + path[i].second;

        if (isValid(ci, cj) && !vis[ci][cj])
        {
            DFS(ci, cj);
            vis[ci][cj] = true;
        }
    }
}
int main()
{
    cin >> n >> m;
    char grid[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    int si, sj;
    cin >> si >> sj;
    DFS(si, sj); // DFS Function Call

    return 0;
}