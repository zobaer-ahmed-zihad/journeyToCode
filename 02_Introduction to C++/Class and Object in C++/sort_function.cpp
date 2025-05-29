#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int ar[n];

   for(int i = 0; i<n; i++){
    cin>>ar[i];
   }
    // sort(ar, ar + n);// Assending order sort
    sort(ar, ar+n, greater<int>()); // Decending order sort 

   for(int i = 0; i<n; i++){
    cout<<ar[i]<<" ";
   }

   return 0;
}