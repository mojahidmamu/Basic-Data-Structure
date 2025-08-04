#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int val;
    cin >> val;
    // push the value in vector at last:
    v.push_back(val);
    int current_idx = v.size() - 1;
    while (current_idx != 0)
    {
        int par_idx = (current_idx - 1) / 2;
        if (v[par_idx] > v[current_idx])
        {
            swap(v[par_idx], v[current_idx]);
        }
        else
        {
            break;
        }
        current_idx = par_idx;
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    

    return 0;
}
