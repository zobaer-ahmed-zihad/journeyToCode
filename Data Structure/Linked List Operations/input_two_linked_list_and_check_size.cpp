//https://docs.google.com/document/d/13pP_NI0UQ-mI5fPmK63wIrVfYF50jWuLLQsEoQr-nKk/edit?tab=t.0
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
//insert any position
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
// print linked list
// void printf_linked_list(Node *head)
// {
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
// }
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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    cout << "Input For the First linked list : " << endl;
    input_linked_list(head, tail);
    cout << "Input For Fist Second linked list : " << endl;
    input_linked_list(head2, tail2);


    // cout << "Our First linked list " << endl;
    // printf_linked_list(head);
    // cout << "Our Second linked list " << endl;
    // printf_linked_list(head2);

    int size1 = linked_list_size(head);
    int size2 = linked_list_size(head2);

    (size1 == size2) ? cout << "YES" : cout << "NO";
    return 0;
}