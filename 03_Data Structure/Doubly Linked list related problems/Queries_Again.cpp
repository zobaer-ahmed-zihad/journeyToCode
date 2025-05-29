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
void insert_at_position(Node *head, int pos, int val)
{
    Node *node = new Node(val);
    Node *tmp = head;

    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }

    node->next = tmp->next;
    tmp->next->prev = node;

    tmp->next = node;
    node->prev = tmp;
}

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *node = new Node(val);

    node->next = head;
    head = node;

    if (head->next != NULL)
    {
        head->next->prev = node;
    }

    if (tail == NULL)
    {
        tail = node;
    }
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *node = new Node(val);

    if (tail == NULL)
    {
        head = node;
        tail = node;
        return;
    }
    node->prev = tail;
    tail->next = node;

    tail = tail->next;
}

int linked_list_size(Node *head)
{
    int cnt = 0;
    Node *tmp = head;

    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }

    return cnt;
}
// print forward
void print_forward(Node *head)
{
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
// print reverse
void print_reverse(Node *tail)
{
    cout << "R -> ";
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;

    while (q--)
    {
        int pos, val;
        cin >> pos >> val;

        if (pos > linked_list_size(head) || pos < 0)
        {
            cout << "Invalid" << endl;
        }

        else if (pos == 0)
        {
            insert_head(head, tail, val);
            print_forward(head);
            print_reverse(tail);
        }
        else if (pos == linked_list_size(head))
        {
            insert_at_tail(head, tail, val);
            print_forward(head);
            print_reverse(tail);
        }
        else
        {
            insert_at_position(head, pos, val);
            print_forward(head);
            print_reverse(tail);
        }
    }

    return 0;
}