#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l(10, 8);
    // Iterator: 
    // l.begin() // pointer the first element: 
    // l.end() // pointer the last element: 

    for (int element : l)
    {
        cout << element << " ";
    }
    return 0;
}
