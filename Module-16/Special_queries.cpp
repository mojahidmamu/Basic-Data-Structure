#include <bits/stdc++.h>
using namespace std;
int main()
{
    int TestCase;
    cin >> TestCase;

    queue<string> Q;

    while (TestCase--)
    {
        int commandNumber;
        cin >> commandNumber;

        if (commandNumber == 0)
        {
            string personName;
            cin >> personName;
            Q.push(personName);
        }
        else if (commandNumber == 1)
        {
            if (!Q.empty())
            {
                cout << Q.front() << endl;
                Q.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }
    return 0;
}
// Acccepted: 