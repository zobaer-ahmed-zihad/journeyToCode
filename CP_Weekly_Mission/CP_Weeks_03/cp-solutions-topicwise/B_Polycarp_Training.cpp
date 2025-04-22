#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   multiset<int> ml;
   for (int i = 0;i < t;i++) {
      int n;
      cin >> n;
      ml.insert(n);
   }

   int result = 0, problems = 1;
   while (!ml.empty()) {
      auto LB = ml.lower_bound(problems);
      if (LB != ml.end()) {
         result++;
         ml.erase(LB);
      }
      else {
         break;
      }
      problems++;
   }
   cout << result << '\n';
   return 0;
}
//problem link: https://codeforces.com/problemset/problem/1165/B