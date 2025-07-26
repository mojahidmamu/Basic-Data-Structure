#include <bits/stdc++.h>
using namespace std;
int main()
{
    int TestCase;
    cin >> TestCase;
    stack<int> st;
    while (TestCase--)
    {
        int commandNumber;
        cin >> commandNumber;
        int personNmae;
        if (commandNumber == 0)
        {
            cin >> personNmae;
        }
        else if (commandNumber == 1)
        {
            if (!st.empty())
            {
                cout << personNmae << endl;
                st.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }
    return 0;
}
