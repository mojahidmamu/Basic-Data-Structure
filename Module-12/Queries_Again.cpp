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

// insert at tail:
void insert_at_tail(Node *head, Node *tail, int pos, int val)
{
    int size = 0;
    if (pos > 0)
    {
        cout << "Invalid" << endl;
        return;
    }

    Node *newNode = new Node(val);
    if (pos == 0)
    {
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    //
    else if (pos == size)
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    //
    else
    {
        
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
        insert_at_tail(head, tail, X, V);
    }

    return 0;
}
