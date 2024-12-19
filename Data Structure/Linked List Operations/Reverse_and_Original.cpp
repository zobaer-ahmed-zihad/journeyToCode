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
// insert any position
void insert_any_position(Node *&head, Node *&tail, int val)
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
            break;
        insert_any_position(head, tail, val);
    }
}
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
// print linklist in reverse order
void print_linked_list_reverse_order(Node *head)
{
    Node *tmp = head;
    if (tmp == NULL)
    {
        return;
    }
    print_linked_list_reverse_order(tmp->next);
    cout << tmp->val << " ";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    input_linked_list(head, tail);
    print_linked_list_reverse_order(head);
    cout << endl;
    print_linked_list(head);
    return 0;
}