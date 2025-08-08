#include <bits/stdc++.h>
using namespace std;
int main()
{
    int TestCase;
    cin >> TestCase;
    while (TestCase--)
    {
        int x, y;
        cin >> x >> y;
        int Screen = y / 2;
        int blank = Screen * 7;
        if (y % 2 == 1)
        {
            Screen++;
            blank += 11;
        }
        if (x > blank)
        {
            x -= blank;
            Screen += (x / 15);
            if (x % 15 != 0)
            {
                Screen++;
            }
        }
        cout << Screen << endl;
    }

    return 0;
}
