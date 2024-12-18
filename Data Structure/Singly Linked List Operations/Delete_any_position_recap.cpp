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
// Delete only head
void delete_head(Node *&head)
{
    Node *DeleteHead = head;
    head = head->next;
    delete DeleteHead;
    cout << endl
         << "Head deleted" << endl;
}
// Delete any position
void delete_any_position(Node *head, int pos)
{
    if (pos == 0)
    {
        delete_head(head);
    }
    else
    {
        Node *tmp = head;
        for (int i = 1; i <= pos - 1; i++)
        {
            tmp = tmp->next;
        }
        Node *deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
        cout << endl
             << pos << " Positions node Deleted" << endl;
    }
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

    cout << endl
         << "Enter position which node you want to delete : ";
    int pos;
    cin >> pos;
    delete_any_position(head, pos);
    print_linked_list(head);

    return 0;
}