#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st1;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int val;
        cin >> val;
        st1.push(val);
    }

    queue<int> q;
    int M;
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    if (N != M)
    {
        cout << "NO" << endl;
        return 0;
    }

    bool areEqual = true;
    while (!st1.empty() && !q.empty())
    {
        if (st1.top() != q.front())
        {
            areEqual = false;
            break;
        }
        st1.pop();
        q.pop();
    }

    if (areEqual)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
/**in my laptop, suddenly in the monitor,,,,unfortunately one green line,,landscape...Right now, how do i do.? */