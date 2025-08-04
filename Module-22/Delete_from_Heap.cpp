#include <bits/stdc++.h>
using namespace std;

// insert at vector:
void insert_in_heap(vector<int> &v, int val)
{
    v.push_back(val);
    int current_idx = v.size() - 1;
    while (current_idx != 0)
    {
        int par_idx = (current_idx - 1) / 2;
        if (v[par_idx] < v[current_idx])
        {
            swap(v[par_idx], v[current_idx]);
        }
        else
        {
            break;
        }
        current_idx = par_idx;
    }
}

// print:
void print_heap(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

// delete heap:
void delete_heap(vector<int> &v)
{
    int first_value = v[0];
    // int last_value = v.back();     // optoin-A: for access first value
    int last_value = v[v.size() - 1]; // optoin-B: for access first value
    first_value = last_value;
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insert_in_heap(v, val);
    }
    delete_heap(v);
    print_heap(v, n);
    return 0;
}
