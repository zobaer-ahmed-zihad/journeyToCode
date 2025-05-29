#include<bits/stdc++.h>
using namespace std;
int main(){
//    pair<int, int>p;
//    p = make_pair(10,20);
//    pair<string, int>p2;
//    p2 = {"hi", 100};

    // cout<<p.first<<" "<<p.second;
    // cout<<p2.first<<" "<<p2.second;

   int n;
   cin>>n;
   vector<pair<int, int>>v(n);
  

   for (int i = 0; i < n; i++)
   {
    cin>>v[i].first>>v[i].second;
   }
   for (int i = 0; i < n; i++)
   {
    cout<<v[i].first<<" "<<v[i].second<<endl;
   }
   

   
   
   return 0;
}