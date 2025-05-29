#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
bool vis[N][N];
int dis[N][N];
int n, m;
char grid[1005][1005];
vector<pair<int, int>> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool isValid(int si, int sj)
{
    return ((si >= 0 && si < n) && (sj >= 0 && sj < m));
}
// DFS
// int cnt = 0;
int DFS(int si, int sj)
{
    vis[si][sj] = true;
    dis[si][sj] = 0;
    int cnt = 1;

    for (int i = 0; i < 4; i++)
    {
        int ci, cj;
        ci = si + path[i].first;
        cj = sj + path[i].second;

        if (isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.')
        {
            cnt = cnt + DFS(ci, cj);
            vis[ci][cj] = true;
            dis[ci][cj] = dis[si][sj] + 1;
        }
    }
    return cnt;
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
    vector<int> count_rooms;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && !vis[i][j])
            {
                count_rooms.push_back(DFS(i, j));
            }
        }
    }
    sort(count_rooms.begin(), count_rooms.end());
    for (int room : count_rooms)
    {
        cout << room << " ";
    }

    return 0;
}