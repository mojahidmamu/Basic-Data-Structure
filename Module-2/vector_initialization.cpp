#include <bits/stdc++.h>
using namespace std;
int main()
{
    // STL = Standard Template Libraray
    // Vector: Dynamin array

    // vector<int> v;        // type:1
    // vector<int> v(10);    // type:2
    // vector<int> v(10, 2); // type:3

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // vector<int> v2(v);    // type:4
    // cout << v2 << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> v(arr, arr + 5);    // type-5
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}
