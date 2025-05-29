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
void delete_any_position(Node *head)
{
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        if (tmp->next->val == head->val)
        {
            cout<<tmp->next->val<<" "<<head->val<<endl;
            // Node *deleteNode = tmp->next;
            // tmp->next = deleteNode->next;
            // delete deleteNode;
        }
        else
        {
            tmp = tmp->next;
        }
    }
}
// Check duplicate value
void check_duplicate(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        delete_any_position(tmp);
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    input_linked_list(head, tail);
    check_duplicate(head);
    printf_linked_list(head);

    return 0;
}