//https://codeforces.com/contest/1676/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   for(int i = 0; i<n; i++){
     string st;
     cin>>st;
     int firstSum = 0;
     int secondSum = 0;
     for(int j = 0; j<3; j++){
       firstSum = firstSum + st[j] - '0';
     }
     for(int j = 3; j<6; j++){
       secondSum = secondSum + st[j] - '0';
     }
     if(firstSum == secondSum){
        cout<<"YES"<<endl;
     }else{
        cout<<"NO"<<endl;
     }
     
   }
   return 0;
}