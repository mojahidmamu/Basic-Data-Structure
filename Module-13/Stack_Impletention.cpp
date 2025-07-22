#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
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
        v.back(); // access the last element
    }
    int size()
    {
        v.size(); 
    }
    int empty()
    {
        v.empty(); 
    }
};

int main()
{

    return 0;
}
