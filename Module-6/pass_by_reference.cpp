 #include <bits/stdc++.h>
using namespace std;

void fun(int *p) //  pass-by-value;
{
    p = NULL;
}
int main()
{
    int a = 10;
    int *p = &a;

    fun(p);

    cout << p << endl;
    cout << *p << endl;

    return 0;
}
