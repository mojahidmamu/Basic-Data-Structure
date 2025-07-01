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

// insert one Node:
void insertInEnd(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != nullptr)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

// Output:
void display(Node *head)
{
    Node *tmp = head;
    while (tmp != nullptr)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = nullptr;

    insertInEnd(head, 10);
    insertInEnd(head, 20);
    insertInEnd(head, 30);

    cout << "Linked List: ";
    display(head);
    return 0;
}
