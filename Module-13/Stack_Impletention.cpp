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

    return 0;
}
