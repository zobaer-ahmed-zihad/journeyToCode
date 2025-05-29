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
// insert nodes
void insert_node(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
// Search
int search_index(Node *head, int val)
{
    int count = 0;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val == val)
        {
            break;
        }
        count++;
    }
    return count;
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
int main()
{
    int n, s;
    long long int val;
    cin >> n;

    while (n--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        while (true)
        {
            cin >> val;
            if (val == -1)
                break;
            insert_node(head, tail, val);
        }
        cin >> s;

        int index = search_index(head, s);
        int size = linked_list_size(head);

        if (size == index)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << index << endl;
        }
    }
    return 0;
}