#include <bits/stdc++.h>
using namespace std;
bool compare(pair<string, int> a, pair<string, int> b)
{
    if (a.first == b.first)
    {
        return b.second > a.second;
    }
    else
    {
        return a.first < b.first;
    }
}

int main()
{
    int N;
    cin >> N;
    vector<pair<string, int>> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr.begin(), arr.end(), compare);

    for (auto p : arr)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}