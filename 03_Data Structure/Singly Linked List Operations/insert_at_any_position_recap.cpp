#include<bits/stdc++.h>
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
void insert_at_any_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    for(int i = 1; i<= pos - 1; i++)
    {
        tmp = tmp ->next;
    }
    newNode -> next = tmp ->next;
    tmp -> next = newNode;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<endl;
        tmp = tmp ->next;
    }
}
int main(){
   Node *head = new Node(10);
   Node *a = new Node(20);
   Node *b = new Node(30);
   Node *c = new Node(40);

    head ->next = a;
    a->next = b;
    b->next = c;
    
   cout<<endl<<"Enter position & value : ";
   int pos, val;
   cin>>pos>>val;

   insert_at_any_position(head, pos, val);
   print_linked_list(head);
   return 0;
}