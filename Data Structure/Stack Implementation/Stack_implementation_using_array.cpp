#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
int main()
{
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.size() << endl;
    if (st.empty() == false)
        cout << st.top() << endl;
    if (!st.empty())
        st.pop();
    if (!st.empty())
        st.pop();
    cout << st.size() << endl;
    // cout<<st.empty()<<endl;
    // if (st.empty() == false)
    //     cout << st.top() << endl;
    if (!st.empty())
        cout << st.top() << endl;

    return 0;
}