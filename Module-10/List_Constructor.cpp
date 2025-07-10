#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Type-1: List Constructor:
    list<int> l;
    list<char> l;
    list<float> l;
    list<long long int> l;

    // Type-2: List with size:
    list<int> l(100);
    list<char> l(50);
    list<float> l(30);
    list<long long int> l(40);


    // Type-3: List with size & value: 
    list<int> l(100,10);
    list<char> l(50, 'a');
    list<float> l(30, 2.5);
    list<long long int> l(10, 10000);

    // Type-4: List with all value, initially:-
    list<int> list1 = {1,2,3,4};
    list<int> list2(list1);

    return 0;
}
