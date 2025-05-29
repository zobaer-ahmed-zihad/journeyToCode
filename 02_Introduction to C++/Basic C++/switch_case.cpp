#include<bits/stdc++.h>
using namespace std;
int main(){
   int a;
   cin>>a;

   switch(a % 2){
    case 0:
        cout<<"Even";
        break;
    case 1:
        cout<<"Odd";
        break;
   }
   return 0;
}