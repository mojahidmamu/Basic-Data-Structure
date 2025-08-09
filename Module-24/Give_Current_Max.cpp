#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};


struct Compare
{
    bool operator()(Student a, Student b)
    {
        if (a.marks != b.marks)
        {
            return a.marks < b.marks;
        }
        else
        {
            return a.roll > b.roll;
        }
    }
};

int main()
{
    priority_queue<Student, vector<Student>, Compare> pq;
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
            Student s;
            cin >> s.name >> s.roll >> s.marks;
            pq.push(s);
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                Student top = pq.top();
                cout << top.name << " " << top.roll << " " << top.marks << endl;
            }
        }
        else if (cmd == 1)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                Student top = pq.top();
                cout << top.name << " " << top.roll << " " << top.marks << endl;
            }
        }
        else if (cmd == 2)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pq.pop();
                if (pq.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    Student top = pq.top();
                    cout << top.name << " " << top.roll << " " << top.marks << endl;
                }
            }
        }
    }

    return 0;
}
// Accepted: 