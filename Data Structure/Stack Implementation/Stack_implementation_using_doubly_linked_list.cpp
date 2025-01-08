#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    int count = 0;
    list<int>l; 
    void push(int val) //O(1)
    {
        count++;
        Node *newNode = new Node(val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode ->prev = tail;
        tail = newNode;
    }
    void pop() //O(1)
    {
        count--;
        Node *deleteNode = tail;
        tail = tail ->prev;
        delete deleteNode;
        if(tail == NULL)
        {
            head = NULL;
            return;
        }
        tail ->next = NULL;
    }
    int top() //O(1)
    {
        return tail->val;
    }
    int size() //O(1)
    {
        return count;
    }
    bool empty() //O(1)
    {
        return head == NULL;
    }
};
int main()
{
    myStack st;
    int n;
    cin>>n;
    cout<<st.size()<<endl;
    while(n--)
    {
        int val;
        cin>>val;
        st.push(val);
    }
    
    cout<<st.size()<<endl;

    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }


    return 0;
}