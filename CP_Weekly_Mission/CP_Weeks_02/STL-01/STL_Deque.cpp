#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        dq.push_back(val);
    }
    for (auto val : dq)
        cout << val << " ";
        
    dq.push_front(3);
    dq.push_front(18);
    dq.pop_front();
    for (auto val : dq)
        cout << val << " ";

    return 0;
}