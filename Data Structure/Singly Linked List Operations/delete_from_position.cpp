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

// insert new node at tail
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Inserted at Head" << endl
             << endl;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout << endl
         << "Inserted at tail" << endl
         << endl;
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
    cout << endl
         << endl;
}
void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << "Inserted " << v << " at position " << pos << endl
         << endl;
}
// Insert at Head
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;

    cout << "Inserted at Head" << endl
         << endl;
}
// Delete from any position (without head)
void delete_from_position(Node *head, int pos)
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
         << "Delete " << pos << " positions node" << endl
         << endl;
}
void delete_head(Node *&head)
{
    Node *deleteHead = head;
    head = head->next;
    delete deleteHead;
    cout << "Head is deleted" << endl
         << endl;
}
int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Option 1 : insert at tail : " << endl;
        cout << "Option 2 : Print linked list : " << endl;
        cout << "Option 3 : Insert at any position : " << endl;
        cout << "Option 4 : Insert at Head : " << endl;
        cout << "Option 5 : Delete from position : " << endl;
        cout << "Option 6 : Delete head : " << endl;
        cout << "Option 7 : Terminate : " << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter a value : " << endl;
            int val;
            cin >> val;

            insert_at_tail(head, val);
        }
        else if (op == 2)
        {
            cout << "Our Linked list : " << endl;
            print_linked_list(head);
        }
        else if (op == 3)
        {
            cout << endl
                 << "Enter position & value : " << endl;
            int pos, val;
            cin >> pos >> val;
            if (pos == 0)
            {
                insert_at_head(head, val);
            }
            else
            {
                insert_at_position(head, pos, val);
            }
        }
        else if (op == 4)
        {
            cout << "Enter value : " << endl;
            int val;
            cin >> val;
            insert_at_head(head, val);
        }
        else if (op == 5)
        {
            cout << "Enter delete node position : " << endl;
            int pos;
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, pos);
            }
        }
        else if (op == 6)
        {
            cout << "Delete head " << endl;
            delete_head(head);
        }
        else if (op == 7)
        {
            cout << "Terminate " << endl;
            break;
        }
    }
    return 0;
}