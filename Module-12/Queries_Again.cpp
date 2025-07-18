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

// Print forward:
void print_forward(Node *head)
{
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// Print backward:
void print_backward(Node *tail)
{
    cout << "R -> ";
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

// insert at tail:
void insert_at_tail(Node *&head, Node *&tail, int pos, int val, int &size)
{

    if (pos < 0 || pos > size)
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
    // inset at specific position:
    else
    {
        Node *tmp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        newNode->prev = tmp;
        tmp->next->prev = newNode;
        tmp->next = newNode;
    }
    size++;
    print_forward(head);
    print_backward(tail);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int size = 0;

    int query;
    cin >> query;
    while (query--)
    {
        int X, V;
        cin >> X >> V;
        insert_at_tail(head, tail, X, V, size);
    }

    return 0;
}
