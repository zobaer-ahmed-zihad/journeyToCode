#include <bits/stdc++.h>
using namespace std;
// create node
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

// level order traversing
void level_order_traversing(Node *root)
{
    queue<Node *> q;
    q.push(root);
    int sum = 0;
    while (!q.empty())
    {
        Node *f = q.front();
        if (f->left != NULL || f->right != NULL)
        {
            sum = sum + f->val;
        }
        q.pop();
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    cout << sum;
}

int main()
{
    vector<int> v;
    Node *root = input_binary_tree();
    level_order_traversing(root);
    

    return 0;
}