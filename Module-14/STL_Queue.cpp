#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> Q;
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
