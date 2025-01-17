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

// level nodes
void level_nodes(Node *root, int l)
{
    queue<pair<Node *, int>> q;
    vector<int> v;
    if (root)
        q.push({root, 0});
    int flag = false;
    while (!q.empty())
    {
        pair<Node *, int> parent = q.front();
        q.pop();
        Node *node = parent.first;
        int level = parent.second;

        if (level == l)
        {
            v.push_back(node->val);
        }

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }

    if (v.size() == 0)
        cout << "Invalid";
    else
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v.at(i) << " ";
        }
    }
}
int main()
{
    Node *root = input_binary_tree();
    int level;
    cin >> level;
    level_nodes(root, level);

    return 0;
}