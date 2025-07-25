#include <bits/stdc++.h>
using namespace std;
queue<int> reverseQueue(queue<int> q)
{
     int testCase;
     cin >> testCase;
     while(testCase--)
    {
         int N;
         cin >> N;
         stack<int> st;
         for(int i = 0; i < N; i++)
        {
             int val;
             cin >> val;
             q.push(val);
        }
        while(!q.empty()){
            st.push(q.front());
            q.pop();
        }
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
    }
    return q;
}

int main()
{
    
    return 0;
}
