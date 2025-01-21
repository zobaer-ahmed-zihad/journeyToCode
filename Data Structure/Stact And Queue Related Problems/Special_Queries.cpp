#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> st;
    int n;
    cin >> n;
    while (n--)
    {
        int q;
        string name;
        cin >> q;
        if (q == 0)
        {
            cin >> name;
        }
        if (q == 0)
        {
            st.push(name);
        }
        else if (q == 1)
        {
            if (st.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << st.front() << endl;
                st.pop();
            }
        }
    }

    return 0;
}