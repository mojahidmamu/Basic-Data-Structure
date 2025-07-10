#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l(10, 6);

    for (int element : l)
    {
        cout << element << " ";
    }

    // myList= or myList.assign(list2.begin(),list2.end())
    
    // l.push_back();  // add in tail
    // l.push_front(); // add in head
    // l.pop_front();  // delete in head
    // l.pop_back();  // delete in tail
    return 0;
}
