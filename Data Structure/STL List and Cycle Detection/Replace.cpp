#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 20, 50, 60, 20};
    // replace(l.begin(), l.end(), 20, 200); //Replace 20 to 200

    auto it = find(l.begin(), l.end(), 60);

    (it == l.end()) ? cout<<"Not found"<<endl: cout<<"Found"<<endl;

    for(int v : l)
    {
        cout<<v<<" ";
    }

    return 0;
}