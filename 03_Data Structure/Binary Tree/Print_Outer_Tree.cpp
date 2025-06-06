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
// input tree
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;

    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;

    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;

        if (l == -1)
        {
            left = NULL;
        }
        else
        {
            left = new Node(l);
        }

        if (r == -1)
        {
            right = NULL;
        }
        else
        {
            right = new Node(r);
        }

        p->left = left;
        p->right = right;

        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}
//left view
void left_view(Node *root)
{
    if (root == NULL)
        return;

    if (root->left == NULL)
        left_view(root->right);
    else
        left_view(root->left);
    cout << root->val << " ";
}
//right view
void right_view(Node *root)
{
    if (root == NULL)
        return;

    cout << root->val << " ";
    if (root->right == NULL)
        right_view(root->left);

    else
        right_view(root->right);
}
//print outer
void print_outer_tree(Node *root)
{
    if (root->left == NULL)
        right_view(root);
    else if (root->right == NULL)
        left_view(root);
    else
    {
        left_view(root);
        right_view(root->right);
    }
}

int main()
{
    Node *root = input_tree();
    print_outer_tree(root);

    return 0;
}