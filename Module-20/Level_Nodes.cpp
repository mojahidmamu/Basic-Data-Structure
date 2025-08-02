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
}

// Order level:
void print_node_at_level(Node *root, int target_level)
{
    if (!root)
    {
        cout << "Invalid" << endl;
        return;
    }

    queue<pair<Node *, int>> q;
    q.push({root, 0});
    bool found = false;

    while (!q.empty())
    {
        Node *current = q.front().first;
        int level = q.front().second;

        if (level == target_level)
        {
            cout << current->val << " ";
            found = true;
        }
        else if (level > target_level)
        {
            break;
        }
        if (current->left)
        {
            q.push({current->left, level + 1});
        }
        if (current->right)
        {
            q.push({current->right, level + 1});
        }
    }

    //
    if (!found)
    {
        cout << "Invalid" << endl;
    }
    cout << endl;
    
}
int main()
{
    Node *root = input_binary_tree();
    int level;
    cin >> level;
    print_node_at_level(root, level);
    return 0;
}
