#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q;
    int n, m;
    cin >> n >> m;
    while (n--)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    while (m--)
    {
        int val;
        cin >> val;
        q.push(val);
    }

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
    }
    else
    {
        flag = true;
    }

    if (flag == false)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}