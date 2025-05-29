#include<bits/stdc++.h>
using namespace std;
int main(){
   int num = 65;
   char ch;
   //impicit typecasting
   ch = num;
//    cout<<"Before implicit typecasting"<<num<<endl;
//    cout<<"Before implicit typecasting"<<ch<<endl;

   //Explicit typecasting
   double a = 10.2587;
   int b;

// (data_type)expression; - c style type casting
   b = (int)a;
   cout<<b<<endl;
// data_type(expression); - Function style typecasting
    char cha = 'A';
    int ascii = int(cha);
    cout<<ascii;
   

   return 0;
}