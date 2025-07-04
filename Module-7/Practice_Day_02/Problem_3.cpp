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

// Find the Maximum value:
int max_value(Node *head)
{
    int maxVal = head->val;
    Node *tmp = head->next;
    while (tmp != NULL)
    {
        if (tmp->val > maxVal)
        {
            maxVal = tmp->val;
        }
        else
        {
            tmp = tmp->next;
        }
    }
    return maxVal;
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
    }

    cout << max_value(head) << endl;

    return 0;
}
