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
bool preOrder(Node *root, bool flag)
{
    if (root == NULL)
        return;
    if (root->val == 7)
        return flag = true;

    preOrder(root->left, flag);
    preOrder(root->right, flag);
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
    bool flag = false;
    flag = preOrder(root, flag);
    if (flag == true)
        cout << "YES";
    return 0;
}