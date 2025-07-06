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

void checkBothElementSame(Node *head1, Node *head2)
{
    while (head1 && head2)
    {
        if (head1->val != head2->val)
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            head1 = head1->next;
            head2 = head2->next;
        }
    }
    if (!head1 && !head2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head1, tail1, val);
    }
    //
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val2;
    while (cin >> val2 && val2 != -1)
    {
        insert_at_tail(head2, tail2, val2);
    }

    checkBothElementSame(head1, head2);
    return 0;
};
