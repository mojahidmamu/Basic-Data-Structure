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
    while (!q.empty())
    {
        // Step- 1.
        Node *p = q.front();
        q.pop();
        // Step- 2.
        int l, r;

        if (!(cin >> l))
        {
            break;
        }
        if (!(cin >> r))
        {
            break;
        }
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

// count leaf node:
void count_leaf_nodes(Node *root, vector<int> &v)
{

    if (root == NULL)
    {
        return;
    }
    count_leaf_nodes(root->left, v);
    count_leaf_nodes(root->right, v);
    if (root->left == NULL && root->right == NULL)
    {
        v.push_back(root->val);
    }
}

int main()
{
    Node *root = input_binary_tree();
    vector<int> leaf_nodes;
    count_leaf_nodes(root, leaf_nodes);
    sort(leaf_nodes.rbegin(), leaf_nodes.rend()); 
    for (int val : leaf_nodes)
    {
        cout << val << " ";
    }
    cout << endl;
}
