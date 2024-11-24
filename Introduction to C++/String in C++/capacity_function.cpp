// s.size() -> returns the size of the string.
// s.max_size() -> returns the maximum size that string can hold.
// s.capacity() -> returns current available capacity of the string.
// s.clear() -> clear the string.
// s.empty() -> return true/false if the string is empty.
// s.resize() -> change the size of the string.

#include<bits/stdc++.h>
using namespace std;
int main(){
   string s = "Hello from Dhaka";
    //cout<<s.size()<<endl;
    // cout<<s.max_size()<<endl;

    // cout<<s.capacity()<<endl;
    // s = "Hello brother, Nice to meet you.";
   
    // cout<<s.capacity()<<endl; 
    // s.clear(); //Clear the string
    // cout<<s.size()<<endl;
    // if(s.empty() == true) cout<<"Empty"<<endl;
    // else cout<<"Not empty";

    s.resize(11);
    cout<<s<<endl;
    s.resize(15, 'a');
    cout<<s<<endl;
    
   return 0;
}