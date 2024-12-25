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
// print linked list
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
// insert at tail
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
// input linked list
void input_linked_list(Node *&head, Node *&tail)
{
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
}
// Reverse linked list
void reverse_linked_list(Node *&head, Node *&tail, Node *tmp)
{
    if(tmp ->next == NULL)
    {
        head = tmp;
        tail = tmp;
        return;
    }
    reverse_linked_list(head, tail, tmp ->next);
    tmp ->next ->next = tmp;
    tmp->next = NULL;
    tail = tmp;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    input_linked_list(head, tail);
    reverse_linked_list(head, tail, head);
    print_linked_list(head);
    // cout<<head->val<<" "<<" and tail "<<tail->val;

    return 0;
}