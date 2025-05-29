#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin >> st;
    set<char> s(st.begin(), st.end());
    for (auto v : s)
        cout << v;

    return 0;
}