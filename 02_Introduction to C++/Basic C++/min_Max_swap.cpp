#include<bits/stdc++.h>
using namespace std;
int main(){
   int a, b;
   cin>>a>> b;

   int minimum = min(a, b);
   int maximum = max(a, b);
   cout<<"Minimum - "<<minimum<<endl;
   cout<<"Maximum - "<<maximum<<endl;
   swap(a, b);
   cout<<"After swap - "<<a<<" "<<b;
   return 0;
}