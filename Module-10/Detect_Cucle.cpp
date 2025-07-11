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

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    // Connections: 
    head->next = a;
    a->next = b;

    // take two pointer: 
    Node *slow = head;
    Node *fast = head;
    bool flag = false; // take a flag variable:

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            flag = 
        }
        
    }
    

    return 0;
}
