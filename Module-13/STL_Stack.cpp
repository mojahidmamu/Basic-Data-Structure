#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    // list<int> l;
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    // print : 
    while (st.empty() == false)
    {
        cout << st.top() << " ";
        st.pop();
    }
    
    
    return 0;
}
