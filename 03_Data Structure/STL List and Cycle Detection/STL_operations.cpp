#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 40, 50, 10, 20, 10};
    // l.remove(10); //Remove 10 from the list

    // l.sort(); //sort list in accessinding order
    // l.sort(greater<int>()); //sort in descending order
    // l.unique();  // make all elements are unique
    l.reverse();
    for(int v : l)
    {
        cout<<v<<" ";
    }

    return 0;
}