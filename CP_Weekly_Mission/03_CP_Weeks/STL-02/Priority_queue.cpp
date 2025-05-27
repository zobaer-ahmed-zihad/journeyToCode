#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(9);
    pq.push(2);
    pq.push(6);
    pq.push(8);
    pq.push(2);

    // cout<<"Size -> "<<pq.size();
    // cout<<pq.empty()<<endl;
    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top()<<endl;
    // pq.pop();
    while (!pq.empty())
    {
        int val = pq.top();
        pq.pop();
        cout << val << " ";
    }

    return 0;
}