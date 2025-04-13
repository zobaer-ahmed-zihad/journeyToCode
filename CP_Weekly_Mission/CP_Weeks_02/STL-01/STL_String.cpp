#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string st;
    cin >> st;
    // cout<<st.front()<<'\n';
    // cout<<st.back()<<'\n';
    // st.clear();
    // cout<<st.size()<<'\n';
    // st.push_back('H');
    // st.pop_back();
    // cout<<st;

    cout << st.substr(2, 5) << '\n';
    cout << st.substr(1) << '\n';

    return 0;
}