#include<bits/stdc++.h>
using namespace std;
int main(){
   int a, b;
   cin>>a>>b;
//    cout<<a<<" "<<b;
   int sum = 0;
   for(int i = a; i<=b; i++){
    sum = (i - a) + (b - i);
    cout<<sum<<endl;
   }

   return 0;
}