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
    cout << endl
         << "Inserted "<<v<< " at " << pos << " position. "<<endl << endl;
}
int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Option 1 : insert at tail : " << endl;
        cout << "Option 2 : Print linked list : " << endl;
        cout << "Option 3 : Insert at any position : " << endl;
        cout << "Option 4 : Terminate : " << endl;
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
            insert_at_position(head, pos, val);
        }
        else if (op == 4)
        {
            cout << "Terminate " << endl;
            break;
        }
    }
    return 0;
}