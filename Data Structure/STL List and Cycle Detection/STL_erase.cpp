#include<bits/stdc++.h>
using namespace std;
int main(){
   list<int>l = {10,20,30,40,50};

//    l.erase(next(l.begin(),3)); //delete single element
    l.erase(next(l.begin(), 2), next(l.begin(), 4)); //delete multiple elements

   for(int v : l)
   {
    cout<<v<<" ";
   }

   return 0;
}