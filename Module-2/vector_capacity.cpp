#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl; // capacity-increasing 0,1,2,4,8,,,,,,
    // v.clear(); // clear function
    cout << v.empty() << endl; // empty function
    cout << v.size() << endl;  // size function
    v.resize(15, 5);           // resize function

    return 0;
}
