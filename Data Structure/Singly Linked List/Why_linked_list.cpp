#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Array and vector takes sequestianl memory address
    // int ar[5] = {5,6,7,8,9};
    vector<int> v = {5, 6, 7, 8};
    cout << (int)&v[2] << " " << (int)&v[3];
    return 0;
}