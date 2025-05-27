#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n;
      cin >> n;
      map<string, vector<int>> mp;
      for (int i = 1;i <= 3;i++) {
         for (int j = 1;j <= n;j++) {
            string s;
            cin >> s;
            mp[s].push_back(i);
         }
      }

      vector<int> result(3 + 1);
     
      for (auto [x, y] : mp) {
         vector<int> v = y;
         if (v.size() == 1) {
            result[v[0]] += 3;
         }
         if (v.size() == 2) {
            result[v[0]]++;
            result[v[1]]++;
         }
      }

      for (int i = 1;i <= 3;i++) {
         cout << result[i] << " ";
      }
      cout << '\n';

   }
   return 0;
}