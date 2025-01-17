#include <bits/stdc++.h>
using namespace std;
//create node
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
// print leaf nodes
void leaf_nodes(Node *root, vector<int> &v)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        v.push_back(root->val);
    }
    leaf_nodes(root->right, v);
    leaf_nodes(root->left, v);
}
int main()
{
    vector<int> v;
    int sum = 0;
    Node *root = input_binary_tree();
    leaf_nodes(root, v);
    sort(v.begin(), v.end(), greater<>());

    for (auto i : v)
        cout << i << " ";

    return 0;
}