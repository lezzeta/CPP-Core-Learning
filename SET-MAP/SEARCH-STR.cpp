#include <bits/stdc++.h>

using namespace std;

main()
{
    set<string>s;
    int n;
    cin >> n;
    cin.ignore();
    for (int i =0; i < n; i++) {
        string str;
        getline(cin,str);
        s.insert(str);

    }
    cout << s.size();

}
