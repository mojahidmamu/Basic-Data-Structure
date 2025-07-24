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

    stack<int> st2;
    int M;
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int val;
        cin >> val;
        st2.push(val);
    }

    if (N != M)
    {
        cout << "NO" << endl;
        return 0;
    }

    bool areEqual = true;
    while (!st1.empty() && !st2.empty())
    {
        if (st1.top() != st2.top())
        {
            areEqual = false;
            break;
        }
        st1.pop();
        st2.pop();
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
