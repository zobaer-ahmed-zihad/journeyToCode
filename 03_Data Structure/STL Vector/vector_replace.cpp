#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> v = {5, 10, 15, 20, 25,30, 20, 25, 20};
//    replace(v.begin(), v.end(), 20, 200); //replace all 20 with 200
    replace(v.begin(), v.begin()+5, 20, 40); //replace first 5 element 20 with 40

   for(int x : v){
    cout<<x<<" ";
   }
   return 0;
}