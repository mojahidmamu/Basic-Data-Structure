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

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    void push(int val) // O(1)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop() // O(1)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }

    int front()
    {
        return  head->val; // access the first element
    }

    int back()
    {
        return  tail->val; // access the last element
    }

    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
}

int
main()
{

    return 0;
}
