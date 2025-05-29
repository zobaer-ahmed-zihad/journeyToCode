//https://leetcode.com/problems/island-perimeter/
#include <bits/stdc++.h>
using namespace std;
bool vis[105][105];
int n, m;
int grid[1005][1005];
vector<pair<int, int>> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool isValid(int si, int sj)
{
    return ((si >= 0 && si < n) && (sj >= 0 && sj < m));
}
int cnt = 0;
void DFS(int si, int sj)
{
    vis[si][sj] = true;
    // cout<<si<<" "<<sj<<endl;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + path[i].first;
        int cj = sj + path[i].second;

        if (isValid(ci, cj) == false)
        {
            cnt++;
        }
        else if (grid[ci][cj] == 0)
        {
            cnt++;
        }

        if (isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 1)
        {
            DFS(ci, cj);
            vis[ci][cj] = true;
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1 && !vis[i][j])
            {
                DFS(i, j);
            }
        }
    }

    cout<<cnt<<endl;
    return 0;
}