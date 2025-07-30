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
Node *input_binary_tree()
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
        Node *root = new Node(val);
    }
    queue<Node *> q;
    // if (root)
    // {
    //     q.push(root);
    // }

    if (root == NULL)
    {
        cout << "No Tree" << endl;
        return 0;
    }
    while (!q.empty())
    {
        // Step- 1.
        Node *p = q.front();
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
        p->left = myLeft;
        p->right = myRight;
        // Step- 3.
        if (p->left != NULL)
        {
            q.push(p->left);
        }
        if (p->right != NULL)
        {
            q.push(p->right);
        }
    }
    return root;
}

int count_nodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    return l + r + 1;
}

int main()
{
    // input_binary_tree();
    Node *root = input_binary_tree();
    cout << count_nodes(root);
    return 0;
}
