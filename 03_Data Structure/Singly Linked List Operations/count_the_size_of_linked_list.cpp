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
void count_the_size_of_linked_list(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while(tmp != NULL)
    {
        count++;
        tmp = tmp ->next;
    }
    cout<<endl<<"Total node is: "<<count;
}
// void print_linked_list(Node *head)
// {
//     cout<<"Our linked list : ";
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val<<" ";
//         tmp = tmp->next;
//     }
// }
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cout<<endl<<"Enter Nodes value : "<<endl;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    count_the_size_of_linked_list(head);
    return 0;
}