#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    // replace(v.begin(), v.end(), 5, 4); // replace specific element
    auto it = find(v.begin(), v.end(), 100);// find specific element in whole vector: 
    

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
