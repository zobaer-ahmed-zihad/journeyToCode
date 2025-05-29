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
void printf_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
// Delete any position
void delete_any_position(Node *&head, int index)
{
    // cout<<index<<endl;
    Node *tmp = head;
    for (int i = 1; i <= index; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            return;
        }
    }
    if (tmp->next == NULL)
    {
        return;
    }
    // cout << tmp->next->next->val << endl;
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
// Check duplicate value
int check_duplicate(Node *&head)
{
    Node *tmp = head;
    for (Node *i = head; i != NULL; i = i->next)
    {
        int count = 0;
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            count++;
            if (i->val == j->val)
            {
                // delete_any_position(head, count);
                cout << i->val << " " << j->val << endl;
                cout<<count<<endl;
            }
        }
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    input_linked_list(head, tail);
    check_duplicate(head);
    // printf_linked_list(head);

    return 0;
}