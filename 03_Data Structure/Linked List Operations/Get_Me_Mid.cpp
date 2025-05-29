//https://www.hackerrank.com/contests/assignment-02-a-basic-data-structures-a-batch-03/challenges/get-me-mid
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
// sort linked list
void sort_linked_list(Node *head)
{
    Node *tmp = head;
    for (Node *i = tmp; i != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
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
// print middle element
void print_mid(Node *head)
{
    int size = linked_list_size(head);
    Node *tmp = head;
    if (size % 2 == 0)
    {
        for (int i = 1; i < size / 2; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << " " << tmp->next->val;
    }
    else
    {
        for (int i = 1; i <= (size / 2); i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    input_linked_list(head, tail);
    sort_linked_list(head);
    print_mid(head);
    return 0;
}