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

// insert at any position:
void insert_at_any_pos(Node *&head, int idx, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

// insert at head:
void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

// insert at tail:
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
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
}

// size linked list: 
int size_liked_list(Node *head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

int main()
{
    // input from user:
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
        insert_at_tail(head, tail, val);
    }

    int idx;
    while (cin >> idx >> val)
    {
         int sz = size_liked_list(head);
         if (idx > sz)
         {
            cout << "Invalid" << endl;
            continue;
         }
         else if (idx == sz)
         {
            insert_at_tail(head, tail, val);
            print_liked_list(head);
         }
         else if (idx == 0)
         {
            insert_at_head(head, val);
            print_liked_list(head);
         }
         else{
            insert_at_any_pos(head, idx, val);
            print_liked_list(head);
         }
         print_liked_list(head);
    }
    return 0;
}
