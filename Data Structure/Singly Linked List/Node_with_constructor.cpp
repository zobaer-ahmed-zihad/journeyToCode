#include <bits/stdc++.h>
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
int main()
{
    Node a(20), b(50), c(500);

    a.next = &b;
    b.next = &c;

    cout << a.next->val;

    return 0;
}