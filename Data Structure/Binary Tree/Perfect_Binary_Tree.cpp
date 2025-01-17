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
// Input Binary tree
Node *input_binary_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(myLeft);
        if (p->right)
            q.push(myRight);
    }
    return root;
}
// maximum height
int max_height(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l, r) + 1;
}
// Count nodes in binary tree
int count_nodes(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    int count = l + r + 1;

    return count;
}
int main()
{
    Node *root = input_binary_tree();
    int height = max_height(root);
    int total_nodes = count_nodes(root);

    int total = pow(2, height);

    (total - 1 == total_nodes) ? cout << "YES" : cout << "NO";
   
    return 0;
}