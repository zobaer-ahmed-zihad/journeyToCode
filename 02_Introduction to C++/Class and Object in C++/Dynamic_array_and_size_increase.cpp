#include<bits/stdc++.h>
using namespace std;
int main(){
   int a;
   cin>>a;
   int *ar = new int[a];
   for(int i = 0; i<a; i++){
        cin>>ar[i];
   }
   int b;
   cin>>b;
   int *br = new int[b];
   for(int i = 0; i<a; i++){
    br[i] = ar[i];
   }
    delete ar;
    for(int i = a; i<b; i++){
        cin>>br[i];
    }
    for(int i = 0; i<b; i++){
        cout<<br[i]<<" ";
    }
    

   return 0;
}