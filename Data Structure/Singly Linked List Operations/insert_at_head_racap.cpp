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
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
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

    head ->next = a;
    a->next = b;
    
   cout<<"Enter head Node value : ";
   int val;
   cin>>val;

   insert_at_head(head, val);
   print_linked_list(head);
   return 0;
}