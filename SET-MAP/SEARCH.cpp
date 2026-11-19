#include <bits/stdc++.h>

using namespace std;

main()
{
    set<int>s;
    for (int i=0;i<10; i++){ s.insert(i); }
    cout << s.size() << endl;
    if (s.count(5) != 0) {
        cout << "found" << endl;
    }
    else {
        cout << "not found" << endl;
    }

    if(s.find(5) != s.end()) {
        cout << "found" << endl;
    }
    else {
        cout << "not found" << endl;
    }

}
