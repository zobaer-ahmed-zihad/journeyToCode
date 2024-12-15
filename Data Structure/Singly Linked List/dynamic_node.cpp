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
int main(){
   Node *head = new Node(20);
   Node *a = new Node(30);
   Node *b = new Node(40);

//    cout<<(*head).val<<endl; //print value
//    cout<<head->val<<endl;

    head->next = a;
    a->next = b;

    cout<<(*head->next).val<<endl; //printf a
    cout<<(*head->next->next).val;


   return 0;
}