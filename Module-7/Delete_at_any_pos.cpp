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

// insert at tail:
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
};

// This is a function, which delete specific node: (specific position node at Linked_List):-
void delete_at_any_pos(Node *&head, int position)
{
    if (head = NULL)
    {
        return;
    }
    if (position == 1)
    {
        Node *delete_node = head;
        head = head->next;
        delete delete_node;
        return;
    }

    Node *tmp = head;
    for (int i = 1; i < position; i++)
    {
        if (tmp == NULL && tmp->next == NULL)
        {
            return;
        }

        tmp = tmp->next;
    }
    if (tmp->next == NULL)
    {
        return; // Position out of bounds
    }

    Node *delete_node = tmp->next;
    tmp->next = tmp->next->next;
    delete delete_node;
}

// print fun:
void print_liked_list(Node *head)
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
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            insert_at_tail(head, tail, val);
        }
    };
    // call this function:
    int positon = 2;
    delete_at_any_pos(head, positon);
    print_liked_list(head);

    return 0;
}
