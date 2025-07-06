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

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    // ////
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

// print:
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    int x;
    while (1)
    {
        cin >> x;
        if (x == -1)
        {
            break;
        }
        else
        {
            insert_at_tail(head, x);
        }
    }

    print_linked_list(head);

    return 0;
}
