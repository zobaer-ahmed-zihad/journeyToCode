#include <bits/stdc++.h>
using namespace std;
int parent[8] = {-1, -1, 1, 1, 6, 4, -1, -1};
int find_leader(int node) //O(logN)
{
    if (parent[node] == -1)
        return node;

    int leader = find_leader(parent[node]);
    parent[node] = leader;
    return leader;
}
int main()
{
    // cout << find_leader(5);
    find_leader(5);

    for (int i = 0; i < 8; i++)
    {
        cout << i<<" -> "<<parent[i] << endl;
    }

    return 0;
}