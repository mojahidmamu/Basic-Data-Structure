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
        root = new Node(val);
    }
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }

    if (root == NULL)
    {
        cout << "No Tree" << endl;
        return NULL;
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
};

// search :
bool search_in_binary(Node *root, int val)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->val == val)
    {
        return true;
    }
    //
    if (val < root->val)
    {
        return search_in_binary(root->left, val);
    }
    else 
    {
        return search_in_binary(root->right, val);
    }
}

int main()
{
    Node *root = input_binary_tree();
    int val;
    cin >> val;
    bool result = search_in_binary(root, val);
    if (result == true)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}
