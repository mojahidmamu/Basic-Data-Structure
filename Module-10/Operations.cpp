#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l(10, 6);

    for (int element : l)
    {
        cout << element << " ";
    }

    // l.remove() // delete the last element form the list: 
    // l.sort() ; // sorted the list in ascending order
    // l.unique() // remove the duplicate element, but must sorted: 
    l.reverse() // reverse the list: 
    return 0;
}
