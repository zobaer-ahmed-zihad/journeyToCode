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
void insert_at_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linked_list_reverse_way(Node *tmp)
{
    if (tmp == NULL)
    {
        return;
    }
    print_linked_list_reverse_way(tmp->next);
    cout << tmp->val << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cout << endl
             << "Enter Nodes value : " << endl;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    print_linked_list_reverse_way(head);
    return 0;
}