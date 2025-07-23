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
    int sz = 0;

    void push(int val) // O(1)
    {
        sz++;
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
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }

    int front() // O(1)
    {
        return head->val; // access the first element
    }

    int back() // O(1)
    {
        return tail->val; // access the last element
    }

    int size() // O(1)
    {
        return sz;
    }
    bool empty()
    {
        if (head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

main()
{
    myQueue Q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        Q.push(val);
    }
    // print: 
    while (!Q.empty())
    {
        cout << Q.front() << " ";
        Q.pop();
    }
    
    // cout << Q.front() << " " << Q.back() << " " << Q.size();
    
    return 0;
}
