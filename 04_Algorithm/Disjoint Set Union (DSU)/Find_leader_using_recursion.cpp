#include <bits/stdc++.h>
using namespace std;
int parent[8] = {-1, -1, 1, 1, 6, 4, -1, -1};
int find_leader(int node)
{

    if(parent[node] == -1)
        return node;
    
    int leader = find_leader(parent[node]);
    return leader;
}
int main()
{
    cout << find_leader(5);
    return 0;
}