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
        newNode->prev = tail;
        tail = newNode;
    }
}

// // Print forward:
// void print_forward(Node *head)
// {
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
//     cout << endl;
// }

// // Print backward:
// void print_backward(Node *tail)
// {
//     Node *tmp = tail;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->prev;
//     }
//     cout << endl;
// }

bool isPalirdrome(Node *head, Node *tail)
{
    while (head != NULL && tail != NULL && head != tail)
    {
        if (head->val != tail->val)
            return false;
        head = head->next;
        tail = tail->prev;
    }
    return true;
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

    

    bool flag = isPalirdrome(head, tail);
    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
// Accepted: