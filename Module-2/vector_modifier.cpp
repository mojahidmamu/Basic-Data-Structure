#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2;
    v2 = v; // value assign
    // v2.pop_back(); // remove last element
    v2.insert(v2.begin() + 2, 10);      // add element in specific position
    v2.erase(v2.begin() + 1, v2.end()); // delete from specific position
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }

    return 0;
}
