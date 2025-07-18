#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// insert at head;
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    if (tmp == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int query;
    cin >> query;
    while (query--)
    {
        int X, V;
        cin >> X >> V;
        if (X == 0)
        {
            insert_at_head(head, tail, V);
        }
        else if (X == 1)
        {
            insert_at_tail(tail, V);
        }
    }

    return 0;
}
