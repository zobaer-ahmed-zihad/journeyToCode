#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
bool vis[N][N];
int n, m;
char building[N][N];
vector<pair<int, int>> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
vector<int> room_count;
bool isValid(int ci, int cj)
{
    return ((ci >= 0 && ci < n) && (cj >= 0 && cj < m));
}

void BFS(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    int cnt = 1;

    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();
        int pi = parent.first;
        int pj = parent.second;

        for (int i = 0; i < 4; i++)
        {
            int ci = pi + path[i].first;
            int cj = pj + path[i].second;

            if (isValid(ci, cj) && !vis[ci][cj] && (building[ci][cj] == '.'))
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                cnt++;
            }
        }
    }
    room_count.push_back(cnt);
}
int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> building[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (building[i][j] == '.' && !vis[i][j])
            {
                BFS(i, j);
            }
        }
    }

    sort(room_count.begin(), room_count.end());
    if (room_count.size() == 0)
        cout << "0";
    for (int room : room_count)
    {
        cout << room << " ";
    }

    return 0;
}