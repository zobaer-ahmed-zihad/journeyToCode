//https://www.hackerrank.com/contests/mid-term-exam-a-introduction-to-algorithms-a-batch-06/challenges
#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
bool vis[N][N];
int dis[N][N];
pair<int, int> par[N][N];
vector<pair<int, int>> path = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int r, c;
char grid[1005][1005];
bool isValid(int ci, int cj)
{
    return ((ci >= 0 && ci < r) && (cj >= 0 && cj < c));
}
void BFS(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    // par[si][sj] = {0, 0};

    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();

        int pi = parent.first;
        int pj = parent.second;

        for (int i = 0; i < 4; i++)
        {
            pair<int, int> p = path[i];
            int ci = p.first + pi;
            int cj = p.second + pj;

            if (isValid(ci, cj) && !vis[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'D'))
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[pi][pj] + 1;
                par[ci][cj] = {pi, pj};
            }
        }
    }
}
int main()
{

    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> grid[i][j];
        }
    }
    int si = -1, sj = -1, di = -1, dj = -1;
    // memset(par, -1, sizeof(par));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }

            if (grid[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }

    BFS(si, sj);

    int x = di;
    int y = dj;

    if (vis[di][dj])
    {
        while (1)
        {
            pair<int, int> pa = par[x][y];
            x = pa.first;
            y = pa.second;
            if (grid[x][y] == 'R')
                break;
            grid[x][y] = 'X';
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }
    // shortest path checking 
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         cout << par[i][j].first<<" "<<par[i][j].second;
    //     }
    //     cout << endl;
    // }

    return 0;
}