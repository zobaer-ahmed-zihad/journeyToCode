#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 40};

    // list<int>l2;
    // l2 = l; //Assign another list

    // l.push_back(100); // Add an element to the tail
    // l.push_front(700); // Add an element to the head
    // l.pop_back(); // Remove element from tail
    // l.pop_front(); //Remove element form head

    // cout<<*next(l.begin(), 2)<<endl; 
    // l.insert(next(l.begin(), 2), 100); //insert single element
    list<int>l2 = {100,200,300,400};
    l.insert(next(l.begin(), 2), l2.begin(), l2.end()); //insert l2 whole list

    for (int v : l)
    {
        cout << v << " ";
    }
    return 0;
}