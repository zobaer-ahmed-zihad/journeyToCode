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
    myStack st;
    myQueue q;
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