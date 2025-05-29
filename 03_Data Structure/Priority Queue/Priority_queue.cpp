#include<bits/stdc++.h>
using namespace std;
int main(){
    //maximum priority queue
   priority_queue<int>q;

   q.push(10);
   q.push(17);
   q.push(7);

   cout<<q.top()<<endl;
   q.push(25);
   cout<<q.top()<<endl;
   q.push(9);
   cout<<q.top()<<endl;
   q.pop(); //25
   q.pop(); //25
   cout<<q.top()<<endl;
   
   cout<<q.empty()<<endl;

   //minimum priority queue
   priority_queue<int, vector<int>, greater<int>> pq;
   pq.push(15);
   pq.push(7);
   pq.push(25);

   cout<<pq.top()<<endl; // 7
   pq.pop();
   cout<<pq.top()<<endl; // 15

   return 0;
}