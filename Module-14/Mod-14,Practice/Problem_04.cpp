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
    vector<int> tmp;
    while (!st1.empty())
    {
        tmp.push_back(st1.top());
        st1.pop();
    }
     
    reverse(tmp.begin(), tmp.end());
    
    stack<int> st2;
    for(int i = 0; i < tmp.size(); i++)
    {
         st2.push(tmp[i]);
    }

    while (!st2.empty())
    {
        cout << st2.top() << " ";
        st2.pop();
    }
    

    return 0;
}
