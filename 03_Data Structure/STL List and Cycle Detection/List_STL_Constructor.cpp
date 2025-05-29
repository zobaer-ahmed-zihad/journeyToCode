#include <bits/stdc++.h>
using namespace std;
int main()
{
    //    list<int> l; //Construct a list with 0 elements.
    //    list<int> l(5); //Construct a list with 5 elements.
    list<int> l1(5, 10); // Construct a list with N elements and the value will be V.
    list<int> l2(l1); //Construct a list by copying another list list1.
    //    cout<<l.size()<<endl; //check size

    // int ar[5] = {5,10,15,20,25};
    // list<int>l(ar, ar + 5); //copy all array values

    vector<int>v = {6,7,8,9,10};
    list<int>l(v.begin(), v.end());  //copy all vector elements
    cout << endl;


    for (int val : l)
    {
        cout << val << endl;
    }

    return 0;
}