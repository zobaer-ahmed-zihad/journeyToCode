#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {5, 10, 15, 20, 25,30, 20, 25, 20};
    auto it = find(v.begin(), v.end(), 30);
    // cout<<*it;

    if(it == v.end()) cout<<"Not Found";
    else cout<<"Found";

   return 0;
}