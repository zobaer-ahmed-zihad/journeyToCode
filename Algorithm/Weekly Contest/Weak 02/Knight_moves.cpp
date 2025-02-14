#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
bool vis[N][N];
int dis[N][N];
vector<pair<int, int>> path = {{2, -1}, {1, -2}, {-1, -2}, {-2, -1}, {-2, 1}, {2, 1}, {1, 2}, {-1, 2}};
int n, m;
char grid[1005][1005];
bool isValid(int ci, int cj)
{
    return ((ci >= 0 && ci < n) && (cj >= 0 && cj < m));
}
void BFS(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();

        int pi = parent.first;
        int pj = parent.second;

        for (int i = 0; i < 8; i++)
        {
            pair<int, int> p = path[i];
            int ci = p.first + pi;
            int cj = p.second + pj;

            if (isValid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[pi][pj] + 1;
            }
        }
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int si, sj, di, dj;
        cin >> si >> sj;
        cin >> di >> dj;

        memset(dis, -1, sizeof(dis));
        memset(vis, false, sizeof(vis));

        BFS(si, sj);
        cout << dis[di][dj] << endl;
    }

    return 0;
}