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
    
    return 0;
}
/**
 * Condition: 
 * 1. head == NULL; => return head...
 * 2. tmp.next == NULL; => 
 * 3. if > tmp.val == tmp.next.val > {
 *     *deleteNode == tmp.next
 *      tmp.next == tmp.next.next;
 *      delete deleteNode;
 * }
 * 4. else if >  tmp.val != tmp.next.val > tmp = tmp.next
 * 5. else if > tmp.next == NULL > break;
 */