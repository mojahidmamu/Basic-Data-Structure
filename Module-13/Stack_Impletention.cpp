#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;

    // There are only 5 operation is useable:
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back(); // access the last element
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << endl;
    cout << st.size() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.size() << endl;
    cout << st.top() << endl;
    st.pop();
    if (st.empty() == true)
    {
        cout << "empty" << endl;
    }
    else
    {
        cout << "NOT empty" << endl;
    }

    return 0;
}
