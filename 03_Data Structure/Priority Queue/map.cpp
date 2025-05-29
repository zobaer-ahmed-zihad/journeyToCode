#include<bits/stdc++.h>
using namespace std;
int main(){
   map<string, int>mp;

   mp["zihad"] = 7;
   mp["Robik"] = 164;
   mp["Khaled"] = 93;
   
//    mp["rashed"] = 0;
//    cout<<mp["zihad"]<<endl;

    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    // cout<<mp["hello"];
    if(mp.count("rashed"))
        cout<<"Ache";
    else cout<<"Nai";

   return 0;
}