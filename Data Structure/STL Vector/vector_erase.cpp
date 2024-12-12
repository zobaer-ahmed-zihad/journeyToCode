#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int>v = {2,5,3,2,100,2,3,5,7,9,2};

//    v.erase(v.begin()+4); //erase 100 only
   v.erase(v.begin()+6, v.end()-1); //erase multiple elements

   for(int x : v){
    cout<<x<<" ";
   }

   return 0;
}