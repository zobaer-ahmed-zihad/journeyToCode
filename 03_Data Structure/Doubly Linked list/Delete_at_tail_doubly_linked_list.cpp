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
// print linked list
void print_linked_list_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
// Delete at tail
void delete_at_tail(Node *&head, Node *&tail)
{
    Node *delete_tail = tail;
    tail = tail->prev;
    delete delete_tail;
    if (tail == NULL)
    {
        head = NULL;
    }
    tail->next = NULL;
}

int main()
{

    // Node *head = NULL;
    // Node *tail = NULL;
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;

    a->prev = head;
    a->next = tail;

    tail->prev = a;

    delete_at_tail(head, tail);
    print_linked_list_forward(head);
    return 0;
}