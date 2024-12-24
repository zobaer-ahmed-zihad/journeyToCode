#include<bits/stdc++.h>
using namespace std;
int main(){
    // list<int>l(10);

    cout<<endl;
    // cout<<l.size()<<endl; //Returns the size of the list.
    // cout<<l.max_size()<<endl; // Returns maximum size


    // list<int>l(10, 7);
    // cout<<l.size()<<endl;
    // l.clear(); //Clears the list elements. 
    // cout<<l.size()<<endl;

    // list<int>l(10, 7);
    // cout<<l.empty()<<endl; //check list empty or not. return true/false

    list<int>l(5);
    l.resize(3); //Change the size of the list
    cout<<l.size()<<endl;
    l.resize(10);
    cout<<l.size()<<endl;
    for(int v : l)
    {
        cout<<v<<" ";
    }


   return 0;
}