#include <bits/stdc++.h>

using namespace std;

int a,b;
char t;

main()
{
    cin >> a >> t >> b;
    if (t == '*') {
        cout << "a*b= " << a*b << endl;
    }
    if (t == '+') {
        cout << "a+b= " << a+b << endl;
    }
    if (t == '-') {
        cout << "a-b= " << a-b << endl;
    }
    if (t == '/') {
        if (b == 0) {
            cout << "Mau bang khong";
        }
        else {
            cout << "a/b= " << a/b << endl;
        }
    }
}
