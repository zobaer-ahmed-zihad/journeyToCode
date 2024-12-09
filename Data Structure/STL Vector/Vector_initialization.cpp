#include <bits/stdc++.h>
using namespace std;
int main()
{
    //    vector<int> v; //vector initialization
    // vector<int> v(10);// vector initialization & decleartion
    // vector<int>v(5, 20);// vector and all values are 20
    /* vector<int>v2(7, 10); //copy vector v2 to v
    vector<int> v(v2); */

    // int ar[5] = {10,20,30,40,50};
    // vector<int>v(ar, ar + 5);
    vector<int> v = {5,10,15,20}; // Direct 

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.size() << endl;

    return 0;
}