#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// insert at tail;
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

// Print:
void print_fun(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

// Remove Duplicate:
void remove_duplicate(Node *head)
{
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        if (tmp->val == tmp->next->val)
        {
            Node *deleteNode = tmp->next;
            tmp->next = tmp->next->next;
            delete deleteNode;
        }
        else if (tmp->next == NULL)
        {
            break;
        }
        else if (tmp->val != tmp->next->val)
        {
            tmp = tmp->next;
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }

    remove_duplicate(head);
    print_fun(head);

    return 0;
}
