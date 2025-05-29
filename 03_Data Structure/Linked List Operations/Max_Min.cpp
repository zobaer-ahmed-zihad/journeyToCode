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
// check minimum value
int check_min(Node *head)
{
    Node *tmp = head;
    int min = tmp->val;
    while (tmp != NULL)
    {
        if (min > tmp->val)
        {
            min = tmp->val;
        }
        tmp = tmp->next;
    }
    return min;
}
// check maximum value
int check_max(Node *head)
{
    Node *tmp = head;
    int max = tmp->val;
    while (tmp != NULL)
    {
        if (max < tmp->val)
        {
            max = tmp->val;
        }
        tmp = tmp->next;
    }
    return max;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_node(head, tail, val);
    }
    int min = check_min(head);
    int max = check_max(head);
    cout << max << " " << min << endl;
    return 0;
}