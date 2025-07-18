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
int sz = 0;
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
        sz++;
    }
};

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

// get length:
int get_length(Node *head)
{
    int count = 1;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        // if (val == -1)
        // {
        //     break;
        // }
        insert_at_tail(head, tail, val);
    }
    //////
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val2;
    while (cin >> val2 && val2 != -1)
    {
        insert_at_tail(head2, tail2, val2);
    }
    // print_liked_list(head);
    // print_liked_list(head2);

    int len1 = get_length(head);
    int len2 = get_length(head2);
    if (len1 == len2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
