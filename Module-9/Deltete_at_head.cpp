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

// delete at head;
void delete_at_head(Node *&head, Node *&tail)
{
    Node *newNode = head;
    head = head->next;
    head->prev = NULL;
    delete newNode;
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

    delete_at_head(head, tail);

    cout << "Forward Print: ";
    print_forward(head);

    return 0;
}
