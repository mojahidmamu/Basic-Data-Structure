#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    // Constructor
    Node(int val) // constructor এ value টা নিচ্ছি।
    {
        this->val = val;   // value টা class variable এ assign করছি।
        this->next = NULL; // যেহেতু প্রতিটি nodeই আলাদা তাই by default zero/NULL set করে দিচ্ছি।
    }
     // Constructor
    // Node(int val) {
    //     data = val;
    //     next = nullptr;
    // }
};

int main()
{
    Node a(10); // এখানে a object এ 10 value এর একটা node create করছি।
    Node b(20); // এখানে b object এ 20 value এর একটা node create করছি।

    a.next = &b; // এখানে b node এর address a এর next/pointer এ রাখা হচ্ছে। যাতে a দিয়ে b কে access করা যায়।

    cout << a.val << endl; // এখানে a এর value print করে দেখলাম।
    cout << b.val << endl; // এখানে b এর value print করে দেখলাম।
    cout << (*a.next).val << endl; // এখানে b এর value a কে dereference করে print করে দেখলাম।
    cout << a.next->val << endl; // এখানে b এর value a কে অন্যভাবে dereference করে print করে দেখলাম।

    return 0;
}
