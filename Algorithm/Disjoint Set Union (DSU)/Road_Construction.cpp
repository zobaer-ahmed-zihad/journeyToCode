//https://cses.fi/problemset/result/12224146/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int parentSize[N];
int maxSize = 0;
int components;
void dsu_set(int n)
{
   for (int i = 1; i <= n; i++)
   {
      parent[i] = -1;
      parentSize[i] = 1;
   }
}
int dsu_find(int node)
{
   while (parent[node] != -1)
   {
      node = parent[node];
   }
   return node;
}
void dsu_union(int a, int b)
{
   int leaderA = dsu_find(a);
   int leaderB = dsu_find(b);

   if (leaderA != leaderB)
   {
      if (parentSize[leaderA] > parentSize[leaderB])
      {
         parent[leaderB] = leaderA;
         parentSize[leaderA] += parentSize[leaderB];
         maxSize = max(maxSize, parentSize[leaderA]);
         components--;
      }
      else
      {
         parent[leaderA] = leaderB;
         parentSize[leaderB] += parentSize[leaderA];
         maxSize = max(maxSize, parentSize[leaderB]);
         components--;
      }
   }
}

int main()
{
   int n, e;
   cin >> n >> e;
   dsu_set(n);
   components = n;
   while (e--)
   {
      int a, b;
      cin >> a >> b;
      
      dsu_union(a, b);
      // int maxSize = max(parentSize[a], parentSize[b]);
      cout << components <<" "<< maxSize << endl;
      
   }

   return 0;
}