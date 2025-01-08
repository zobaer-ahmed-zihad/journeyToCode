#include <bits/stdc++.h>
using namespace std;
class myQueue
{
public:
    list<int>l;

    void push(int val) // O(1)
    {
        l.push_back(val);
    }
    void pop() // O(1)
    {
        l.pop_front();
    }
    int front() // O(1)
    {
        return l.front();
    }
    int back() // O(1)
    {
        return l.back();
    }
    int size() // O(1)
    {
        return l.size();
    }
    bool empty() // O(1)
    {
        return l.empty();
    }
};
int main()
{
    myQueue q;
    int n;
    cin>>n;

    while(n--)
    {
        int val;
        cin>>val;
        q.push(val);
    }
    // cout<<q.front()<<" "<<q.size()<<" "<<q.back();

    while(!q.empty())
    {
        cout<<q.front()<<" "<<endl;
        q.pop();
    }

    return 0;
}