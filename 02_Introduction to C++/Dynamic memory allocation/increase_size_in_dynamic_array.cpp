#include <bits/stdc++.h>
using namespace std;

int main() {
    // static array 
//   int a[5];
//   int ar[7];

// Dynamic array
   int *a = new int [5];
   for(int i = 0; i<5; i++){
       cin>>a[i];
   }
   int *ar = new int [7];
   for(int i = 0; i<5; i++){
       ar[i] = a[i];
   }
   ar[5] = 60;
   ar[6] = 70;
   delete [] a; // Delete a array
   for(int i = 0; i<7; i++){
       cout<<ar[i]<<" ";
   }

}
