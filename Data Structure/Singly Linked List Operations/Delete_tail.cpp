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

void delete_tail(Node *head)
{
    Node *tmp = head;
    while(tmp ->next->next != NULL)
    {
        tmp = tmp ->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = NULL;
    delete deleteNode;
    cout<<"Tail node deleted"<<endl;
}
// Print linked list
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    delete_tail(head);
    print_linked_list(head);

    return 0;
}