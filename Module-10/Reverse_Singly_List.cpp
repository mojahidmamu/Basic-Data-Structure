#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    return 0;
}
/**
 *
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

void print(Node *head)
{
  Node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
  cout << endl;
}
void reverse(Node *&head, Node *cur) // cur নিয়েছি যাতে করে head চেঞ্জ না হয়ে যায়, এটি মূলত temp এর মতো কাজ করে
{
  if (cur->next == NULL) // base case 
  {
    head = cur; // যদি শেষ Node এ চলে আসি , তবে এটিকে head বলে দিচ্ছি 
    return; // এবং রিটার্ন করছি
  }
  reverse(head, cur->next); // আগে সব recursion call গুলা করে দিচ্ছি
  
  // কল শেষে কোনো একটি Node এ ব্যাক আসার পর
  cur->next->next = cur; // currently যে নোড এ আছি তার নেক্সট এর Node এর next পয়েন্টার চেঞ্জ করে নিজের দিকে করে দিচ্ছি
  cur->next = NULL; // এবং নিজের next পয়েন্টার Null এর দিকে করে দিচ্ছি
}
int main()
{
  Node *head = new Node(10);
  Node *a = new Node(20);
  Node *b = new Node(30);
  Node *c = new Node(40);

  head->next = a;
  a->next = b;
  b->next = c;
  reverse(head, head);
  print(head); 
  return 0;
}

Output : 40 30 20 10 

 */