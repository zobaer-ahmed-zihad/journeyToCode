#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    cout << st.size() << endl;
    if (!st.empty())
        cout << st.top() << endl;
    if (!st.empty())
        st.pop();
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}