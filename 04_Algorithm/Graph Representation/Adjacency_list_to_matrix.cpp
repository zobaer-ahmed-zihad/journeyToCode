#include <bits/stdc++.h>
using namespace std;
vector<int> adjList[1000];
int main()
{
    int n, e;
    cin >> n >> e;
    int mat[100][100];

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adjList[b].push_back(a);
        adjList[a].push_back(b);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < adjList[i].size(); j++)
    //     {
    //         mat[i][adjList[i][j]] = 1;
    //     }
    // }

    //Alternative syntax
    for(int i = 0; i<n; i++)
    {
        for(int val : adjList[i])
        {
            mat[i][val] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}