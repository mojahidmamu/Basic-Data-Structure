#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl; // capacity-increasing 0,1,2,4,8,,,,,,
    return 0;
}
