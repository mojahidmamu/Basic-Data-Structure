#include <bits/stdc++.h>
using namespace std;
class Student
{
    public: 
    string name;
    int roll;
    int marks;
};

int main()
{
    // map<string, int, int> mp;
    priority_queue<string, int, int> pq;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        Student s;
        cin >> s.name >> s.roll >> s.marks;
        pq.push(s);
    }

    int Q;
    cin >> Q;
    while (Q--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            /* code */
        }
        else if (cmd == 1)
        {
            /* code */
        }
        else if (cmd == 2)
        {
            /* code */
        }
        
        
        
    }
    

    return 0;
}
