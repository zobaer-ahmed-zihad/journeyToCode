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

    // cout<<st.size()<<" "<<st.top();
    stack<int> st2;
    int m;
    cin >> m;
    while (m--)
    {
        int val;
        cin >> val;
        st2.push(val);
    }
    //  cout<<st2.size()<<" "<<st2.top();
    bool flag = false;
    if (st.size() == st2.size())
    {
        while (!st.empty())
        {
            if (st.top() == st2.top())
            {
                st.pop();
                st2.pop();
            }else{
                flag = true;
                break;
            }
        }
    }
    else
    {
        flag = true;
    }
    (flag == true )? cout<<"NO": cout<<"YES";
}
