// Problem - 02
//https://docs.google.com/document/d/1KOilh4Vb-PN21_kD7ejLA6qx6AhVbHlq/edit
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

    //    cout<<st.size();

    queue<int> q;
    int m;
    cin >> m;
    while (m--)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    // cout<<q.size();
    bool flag = false;
    
    if (st.size() == q.size())
    {
        while (!st.empty() || !q.empty())
        {
            if (st.top() != q.front())
            {
                flag = true;
                break;
            }
            st.pop();
            q.pop();
        }
    }else{
        flag = true;
    }

    if (flag == false)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}