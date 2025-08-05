#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int x, y;
        cin >> x >> y;
        
        int cellsPerScreen = 15;                                         
        int usedCells = y * 4 + x;                                     
        int screens = (usedCells + cellsPerScreen - 1) / cellsPerScreen; 
        cout << screens << "\n";
    }

    return 0;
}
