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

class myQueeu
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    void push(int val)
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
    
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back(); // access the last element
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
