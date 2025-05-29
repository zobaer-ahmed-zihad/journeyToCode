#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
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
// Insert at tail
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
// input linked list
 void input_linked_list(Node *&head, Node *&tail)
 {
     int val;
     while(true)
     {
         cin>>val;
         if(val == -1)
         {
             break;
         }
         insert_at_tail(head, tail, val);
     }
 }
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    // input First linked list
    // int val1;
    // while (true)
    // {
    //     cin >> val1;
    //     if (val1 == -1)
    //     {
    //         break;
    //     }
    //     insert_at_tail(head1, tail1, val1);
    // }
    // input second linked list
    // int val2;
    // while (true)
    // {
    //     cin >> val2;
    //     if (val2 == -1)
    //     {
    //         break;
    //     }
    //     insert_at_tail(head2, tail2, val2);
    // }

    input_linked_list(head1, tail1);
    input_linked_list(head2, tail2);

    print_linked_list(head1);
    cout << endl;
    print_linked_list(head2);

    return 0;
}