#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l(10, 5);

    // l.back() //Access the tail element.
    // l.front() // Access the head element.
    // *next(l.begin(), 2) // Access the ith element

    for (int element : l)
    {
        cout << element << " ";
    }
    return 0;
}
