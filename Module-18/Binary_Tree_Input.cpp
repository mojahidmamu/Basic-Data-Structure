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

// input from user: Binary Tree>>>
void input_binary_tree()
{
    int val;
    cin >> val;
    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);
    if (root == NULL)
    {
        cout << "No Tree" << endl;
        return;
    }
    while (!q.empty())
    {
        // Step- 1.
        Node *f = q.front();
        q.pop();
        // Step- 2.
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
        {
            myLeft = NULL;
        }
        else
        {
            myLeft = new Node(l);
        }
        // 
        if (r == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node(r);
        }

        // cout << f->val << " ";
        // Step- 3.
        if (f->left != NULL)
        {
            q.push(f->left);
        }
        if (f->right != NULL)
        {
            q.push(f->right);
        }
    }
}

int main()
{
    input_binary_tree();

    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    // root->left = a;
    // root->right = b;
    // a->left = c;
    // b->left = d;
    // b->right = e;

    return 0;
}
