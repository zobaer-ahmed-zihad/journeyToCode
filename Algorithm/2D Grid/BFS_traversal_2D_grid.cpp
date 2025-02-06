#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
bool vis[N][N];
int dis[N][N];
vector<pair<int, int>> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int r, c; // r - row, c - column
// check row & columln is valid index or not
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

    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();

        int pi = parent.first;  // pi - parent i index
        int pj = parent.second; // pj - parent j index

        for (int i = 0; i < 4; i++)
        {
            pair<int, int> p = path[i];
            int ci = p.first + pi;  // ci - child i index
            int cj = p.second + pj; // cj - child j index

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

    cin >> r >> c;
    char a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    int si, sj;
    cin >> si >> sj; //source input

    BFS(si, sj); // BFS Fuction call
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << dis[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}