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

    int cnt = 0;
    while (!st.empty())
    {
        cnt++;
        st.pop();
    }
    stack<int> st1;
    int n1;
    cin >> n1;
    while (n1--)
    {
        int val;
        cin >> val;
        st1.push(val);
    }

    int cnt1 = 0;
    while (!st1.empty())
    {
        cnt1++;
        st1.pop();
    }
    // cout << cnt << " " << cnt1;
    bool flag = false;

   if(st.size() == st1.size())
   {
        while(!st.empty() || !st1.empty())
        {
            cout<<st.top()<<" "<<st1.top()<<endl;
            st.pop();
            st1.pop();
        }
   }

    // if(flag == false)
    //     cout<<"YES"<<endl;
    //     else cout<<"NO"<<endl;
}
