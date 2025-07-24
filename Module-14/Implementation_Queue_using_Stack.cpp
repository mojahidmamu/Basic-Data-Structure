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

class myQueue
{
public:
    list<int> l;

    void push(int val) // O(1)
    {
        l.push_back(val);
    }

    void pop() // O(1)
    {
         l.pop_front();
    }

    int front() // O(1)
    {
        return  l.front(); // access the first element
    }

    int back() // O(1)
    {
        return  l.back(); // access the last element
    }

    int size() // O(1)
    {
        return l.size();
    }
    bool empty()
    {
        l.empty();
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

    return 0;
}
