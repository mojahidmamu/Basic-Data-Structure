#include <bits/stdc++.h>
using namespace std;
int main()
{
    auto cmp = [](const pair<int, pair<int, string>> &a,
                  const pair<int, pair<int, string>> &b)
    {
        if (a.first != b.first)
            return a.first < b.first;           // higher marks first
        return a.second.first > b.second.first; // smaller roll first
    };

    priority_queue<
        pair<int, pair<int, string>>,
        vector<pair<int, pair<int, string>>>,
        decltype(cmp)>
        pq(cmp);
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        pq.push({marks, {roll, name}});
    }

    int Q;
    cin >> Q;
    while (Q--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push({marks, {roll, name}});
        }

        if (cmd == 2 && !pq.empty())
        {
            pq.pop();
        }

        if (pq.empty())
        {
            cout << "Empty" << endl;
        }
        else
        {
            auto top = pq.top();
            cout << top.second.second << " "; // name
            cout << top.second.first << " ";  // roll
            cout << top.first << endl;        // marks
        }
    }

    return 0;
}