// s+= -> append another string.
// s.append() -> append another string.
// s.push_back() -> add character to the last of the string.
// s.pop_back() -> remove the last character of the string.
// s= -> assign string.
// s.assign() -> assign string.
// s.erase() -> erase characters from the string.
// s.replace() -> replace a portion of the string.
// s.insert() -> insert a portion to a specific position.

#include<bits/stdc++.h>
using namespace std;
int main(){
   string a = "Hello_world";
   string b = "World";
   string c = "My first program";
    // a = a + b + c;
    // a += b;
//    a.append(b);
    // a.push_back('H');
    // a.pop_back();
    // a.assign(b);
    //a.erase(3,2);
    // a.replace(6, 5, "Bangladesh");
    a.insert(5, " I know you ");
   cout<<a<<endl;

   return 0;
}