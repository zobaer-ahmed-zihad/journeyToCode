#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> v = {10,20,30,40,50,60};

    //cout<<v[v.size()-1]<<endl; //last element access
    cout<<v.back()<<endl;
    // cout<<v[0]<<endl; //First element access
    cout<<v.front()<<endl;
    
    for(auto it = v.begin(); it<v.end(); it++){
        cout<<*it<<" ";
    }

   return 0;
}