#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;

    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        s.insert(val);
    }

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }
    if (s.count(70))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}