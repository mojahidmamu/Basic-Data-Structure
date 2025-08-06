#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;
    while (true)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        else if (c == 1)
        {
            pq.pop();
        }
        else if (c == 2)
        {
            cout << pq.top() << endl;
        }
        else
        {
            break;
        }
    }

    // pq.push(10);
    // pq.push(20);
    // pq.push(30);
    // pq.push(40);
    // cout << pq.top() << endl; // 40
    // pq.push(100);
    // cout << pq.top() << endl; // 1000
    // cout << pq.empty() << endl;
    return 0;
}
