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
        int valX;
        cin >> valX;
        st1.push(valX);
    }
    return 0;
}
