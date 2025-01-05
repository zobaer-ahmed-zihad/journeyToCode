#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
// Insert at tail
void insert_at_tail(Node *&head, Node *&tail, string st)
{
    Node *newNode = new Node(st);
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
// visit node
void visit_node(Node *head, Node *&pointer, string s)
{
    bool flag = false;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == s)
        {
            flag = true;
            pointer = tmp;
            break;
        }
        else
        {
            tmp = tmp->next;
        }
    }
    (flag == true) ? cout << s << endl : cout << "Not Available" << endl;
}
// check next node
void check_next(Node *head, Node *&pointer)
{
    Node *tmp = pointer;
    if (tmp->next == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        cout << tmp->next->val << endl;
        pointer = tmp->next;
    }
}
// check previous node
void check_previous(Node *head, Node *&pointer)
{
    Node *tmp = pointer;
    if (tmp->prev == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        cout << tmp->prev->val << endl;
        pointer = tmp->prev;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *pointer = NULL;

    // input linked list
    while (true)
    {
        string st;
        cin >> st;
        if (st == "end")
            break;
        insert_at_tail(head, tail, st);
    }

    int n;
    cin >> n;
    while (n--)
    {
        // Node *tmp = head;
        string q;
        cin >> q;
        if (q == "visit")
        {
            string s;
            cin >> s;
            visit_node(head, pointer, s);
        }
        else if (q == "next")
        {
            check_next(head, pointer);
        }
        else if (q == "prev")
        {
            check_previous(head, pointer);
        }
    }
    return 0;
}