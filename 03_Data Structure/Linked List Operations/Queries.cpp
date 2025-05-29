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
// Insert at Head
void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    // if (head == NULL)
    // {
    //     head = newNode;
    //     tail = newNode;
    //     return;
    // }
    newNode->next = head;
    head = newNode;
}
//insert at tail
void insert_at_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while(tmp -> next != NULL)
    {
        tmp = tmp -> next;
    }
    tmp -> next = newNode;

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
    cout << endl;
}
// Check linked list size
int linked_list_size(Node *head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
// Delete from head
void delete_head(Node *&head, Node *&tail, int size)
{
    if(head == NULL)
    {
        return;
    }
    Node *deleteHead = head;
    head = head->next;
    delete deleteHead;
}
// delete from tail
void delete_from_tail(Node *head)
{
    Node *tmp = head;
    while (tmp->next->next != NULL)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = NULL;
    delete deleteNode;
}
// Delete any position
void delete_any_position(Node *&head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if(tmp == NULL)
        {
            return; 
        }
    }
    if(tmp ->next == NULL)
    {
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q, x, v;
    cin >> q;
    while (q--)
    {
        cin >> x >> v;

        if (x == 0)
        {
            insert_at_head(head, tail, v);
            print_linked_list(head);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
            print_linked_list(head);
        }
        else if (x == 2)
        {
            int size = linked_list_size(head);
            if (v == 0)
            {
                delete_head(head, tail, size);
                print_linked_list(head);
            }
            else if (size - 1 == v)
            {
                delete_from_tail(head);
                print_linked_list(head);
            }
            else if (v < size)
            {
                delete_any_position(head, v);
                print_linked_list(head);
            }
            else if (v >= size)
            {
                print_linked_list(head);
            }
        }
    }

    return 0;
}