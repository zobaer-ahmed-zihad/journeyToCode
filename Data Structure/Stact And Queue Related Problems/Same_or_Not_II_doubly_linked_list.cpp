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
    list<int> l;
    void push(int val) // O(1)
    {
        count++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop() // O(1)
    {
        count--;
        Node *deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }
    int top() // O(1)
    {
        return tail->val;
    }
    int size() // O(1)
    {
        return count;
    }
    bool empty() // O(1)
    {
        return head == NULL;
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
        newNode->prev = tail;
        tail = tail->next;
    }
    void pop() // O(1)
    {
        sz--;
        Node *deleteHead = head;
        head = head->next;
        head->prev = NULL;
        delete deleteHead;
        if (head == NULL)
        {
            tail = NULL;
            return;
        }
        head->prev = NULL;
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
    if (st.size() == 0 || q.size() == 0)
        cout << "YES";
    if (st.size() == q.size())
    {
        while (!st.empty() || !q.empty())
        {
            if (st.top() != q.front())
            {
                cout << "NO";
                break;
            }
            if (st.top() == q.front())
            {
                if (!(st.empty() == NULL))
                {
                    st.pop();
                }
                if (!(q.empty() == NULL))
                {
                    q.pop();
                }

                if (st.empty() == NULL || q.empty() == NULL)
                {
                    cout << "YES";
                    break;
                }
            }
        }
    }
    else
    {
        flag = true;
    }

    if (flag == true)
        cout << "NO";

    return 0;
}