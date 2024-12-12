#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // First way
    //  vector<int> v;
    //  for (int i = 0; i < n; i++)
    //  {
    //      int x;
    //      cin >> x;
    //      v.push_back(x);
    //  }

    // second way
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int val : v)
    {
        cout << val << " ";
    }

    return 0;
}