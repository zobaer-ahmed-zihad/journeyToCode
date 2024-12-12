#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {5, 10, 15, 20, 25,30, 20, 25, 20};
    vector<int> v2 = {101,102,103};
    // v2 = v; //vector copy
    // v.push_back(50); //add element to the end
    // v.pop_back(); //remove element to the end
    // v.insert(v.begin()+2, 100); //single value insert
    // v.insert(v.begin()+3, v2.begin(), v2.end()); //insert another vector


    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}