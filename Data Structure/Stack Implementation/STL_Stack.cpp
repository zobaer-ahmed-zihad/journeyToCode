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
    cout<<st.size()<<endl;
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}