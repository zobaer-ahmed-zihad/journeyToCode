#include<bits/stdc++.h>
using namespace std;
void func(int *&p)
{
    p = NULL;
    // cout<<&p<<endl;
}
int main(){
   int a = 20;

   int *ptr = &a;
   func(ptr);

   cout<<ptr<<" Main"<<endl;

   return 0;
}