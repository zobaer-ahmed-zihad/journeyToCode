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
// Check both linked list is same or not
void check_both_are_same_or_not(Node *head1, Node *head2)
{
    bool flag = false;
    int size1 = linked_list_size(head1);
    int size2 = linked_list_size(head2);
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    if (size1 == size2)
    {
        while (tmp1 != NULL)
        {
            if (tmp1->val != tmp2->val)
            {
                flag = true;
                break;
            }
            else
            {
                tmp1 = tmp1->next;
                tmp2 = tmp2->next;
            }
        }
    }
    if (size1 != size2 || flag == true)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    input_linked_list(head1, tail1);
    input_linked_list(head2, tail2);
    check_both_are_same_or_not(head1, head2);
    return 0;
}