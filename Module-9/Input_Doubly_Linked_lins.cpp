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

// delete at any position:
void delete_at_any_pos(Node *&head, int idx)
{
    Node *tmp = head;
    for (int i = 0; i < idx; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
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

    // other-wise, input from user:
    delete_at_any_pos(head, 2);

    cout << "Print: ";
    print_forward(head);

    return 0;
}
