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

//insert new node at tail
void insert_at_tail(Node *&head, int v)
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

//print linked list
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val<<" ";
        tmp = tmp ->next;
    }
    cout << endl<<endl;
}
int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Option 1 : insert at tail : " << endl;
        cout << "Option 2 : Print linked list : " << endl;
        cout << "Option 3 : Terminate : " << endl;
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
            cout << "Terminate " << endl;
            break;
        }
    }
    return 0;
}