#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    cout << pq.top() << endl; // 40
    pq.push(100);
    cout << pq.top() << endl; // 1000
    cout << pq.empty() << endl;
    return 0;
}
