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
//print linked list
void print_linked_list_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
//Insert at tail
void insert_at_tail(Node *tail, int v)
{
    Node *newNode = new Node(v);
    tail->next = newNode;
    newNode ->prev = tail;
    tail = newNode;
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;

    a->prev = head;
    a->next = tail;

    tail->prev = a;

    insert_at_tail(tail, 100);
    print_linked_list_forward(head);
    return 0;
}