#include <bits/stdc++.h>
using namespace std;
int main()
{
     list<int> l(10);
     // cout << l.size() << endl;
     // cout << l.max_size() << endl;
     // l.clear();
     // cout << l.size() << endl;
     // cout << l.empty() << endl;

     // Print :
     for (int element : l)
     {
          cout << element << " "; // print the all element...
     }

     // erase: function:
     l.resize(20, 5);
     for (int element : l)
     {
          cout << element << " "; // print the all element...
     }
     return 0;
}
