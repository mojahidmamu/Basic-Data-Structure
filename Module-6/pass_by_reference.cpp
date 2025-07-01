#include <bits/stdc++.h>
using namespace std;

void fun(int *&p) //  pass-by-reference;
{
    p = NULL;
}
int main()
{
    int a = 10;
    int *p = &a;

    fun(p);

    if (p == NULL)
    {
        cout << "NULL" << endl;
    }
    else{
        cout << p << endl;
        // cout << *p << endl;
    }
    

    return 0;
}
