#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void inOrder(Node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}
int main()
{
    Node *root = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *c = new Node(4);
    Node *d = new Node(5);
    Node *e = new Node(6);
    Node *f = new Node(7);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    d->left = e;
    d->right = f;

    inOrder(root);

    return 0;
}