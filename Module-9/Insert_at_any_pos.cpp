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

// insert at any position:
void insert_at_any_pos(Node *&head, int idx, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next->prev = newNode;
    tmp->next = newNode;
    newNode->prev = tmp;
}

// print-forward:
void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = new Node(40);

    head->next = a;
    a->next = b;
    b->next = tail;

    a->prev = head;
    b->prev = a;
    tail->prev = b;

    insert_at_any_pos(head, 2, 250);

    cout << "Forward Print: ";
    print_forward(head);

    return 0;
}
