#include<bits/stdc++.h>
using namespace std;
int main(){
   queue<int>q;

   int n;
   cin>>n;
   while(n--)
   {
        int val;
        cin>>val;
        q.push(val);
   }
    // cout<< q.size()<<" "<<q.front()<<" "<<q.back();

    if(!q.empty())
        q.pop();

    if(!q.empty())
        cout<<q.front()<<endl;

//    while(!q.empty())
//    {
//      cout<<q.front()<<" "<<endl;
//      q.pop();
//    }

   return 0;
}