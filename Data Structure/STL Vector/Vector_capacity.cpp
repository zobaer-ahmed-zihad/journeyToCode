#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;

    // int size = v.size(); //return the size of the vector
    // cout<<v.max_size()<<endl; //Return the maximum size vactor can hold
    // cout<<v.capacity()<<endl;
    // v.push_back(10);
    // v.push_back(10);
    // v.push_back(10);
    // v.push_back(10);
    // v.push_back(10);
    // cout<<v.capacity()<<endl; //current capacity increase in double
    // vector<int>v(5, 10);
    // for(int i = 0; i<5; i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // v.clear(); just clear the size 
    // cout<<v.size()<<endl;
    // cout<<v[2];
    // cout<<v.empty()<<endl; //check vector empty or not
    cout<<v.size()<<endl;
    v.resize(20); // resize the size
    cout<<v.size();


    return 0;
}