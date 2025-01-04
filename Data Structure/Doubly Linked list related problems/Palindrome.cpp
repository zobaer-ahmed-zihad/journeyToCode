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
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
}
// Check palindrome
void check_palindrome(Node *head, Node *tail)
{
    bool flag = false;
    while (head != NULL)
    {
        if (head->val == tail->val)
        {
            head = head->next;
            tail = tail->prev;
        }
        else
        {
            flag = true;
            break;
        }

        if (head == tail)
            break;
        ;
    }
    (flag == true) ? cout << "NO" : cout << "YES";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    input_linked_list(head, tail);
    check_palindrome(head, tail);

    return 0;
}