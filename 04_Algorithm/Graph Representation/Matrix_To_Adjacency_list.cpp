#include <bits/stdc++.h>
using namespace std;
void matrixToList(int mat[][100], int n)
{
    vector<int> adj_list[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 1)
            {
                adj_list[i].push_back(j);
            }
        }
    }
    //print adjacency list
    for (int i = 0; i < n; i++)
    {
        cout << "Node " << i << " -> ";
        for (int v : adj_list[i])
        {
            cout << v << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int mat[100][100];
    //input matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    matrixToList(mat, n); // Function call

    return 0;
}