#include <bits/stdc++.h>
using namespace std;
int main()
{
    int TestCase;
    cin >> TestCase;
    while (TestCase--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int T1 = a - 1;
        int T2 = abs(b - c) + (c - 1);
        if (T1 < T2)
        {
            cout << 1 << endl;
        }
        else if (T1 > T2)
        {
            cout << 2 << endl;
        }
        else 
        {
            cout << 3 << endl;
        }
    }

    return 0;
}
