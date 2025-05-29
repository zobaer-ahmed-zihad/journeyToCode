#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class myQueue
{
public:
    int sz = 0;
    Node *head = NULL;
    Node *tail = NULL;

    void push(int val) // O(1)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void pop() // O(1)
    {
        sz--;
        Node *deleteHead = head;
        head = head->next;
        delete deleteHead;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int front() // O(1)
    {
        return head->val;
    }
    int back() // O(1)
    {
        return tail->val;
    }
    int size() // O(1)
    {
        return sz;
    }
    bool empty() // O(1)
    {
        return head == NULL;
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
    
    while(!q.empty())
    {
        cout<<q.front()<<" "<<endl;
        q.pop();
    }

    return 0;
}