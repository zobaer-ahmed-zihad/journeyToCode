#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin >> n;
   multiset<int> ml;
   while (n--)
   {
      int val;
      cin >> val;
      ml.insert(val);
   }
   int i = 1;
   int dayCnt = 0;
   while (!ml.empty())
   {
      if (ml.lower_bound(i) != ml.end())
      {
         auto LB = ml.lower_bound(i);
         ml.erase(LB);
         dayCnt++;
         i++;
      }
      else
         break;
   }
   cout << dayCnt << '\n';

   return 0;
}
//problem link: https://codeforces.com/problemset/problem/1165/B