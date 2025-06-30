#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    cout << (int)&a[2] << " " << (int)&a[3];
    return 0;
}
