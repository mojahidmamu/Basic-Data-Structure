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

int main()
{
    pair<int, int> p;
    p = make_pair(10, 20);
    cout << p.first << endl;
    cout << p.second << endl;
    return 0;
}
