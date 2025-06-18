#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // int arr[n];
    vector<int> v(n); // vector 
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    
    
    return 0;
}
