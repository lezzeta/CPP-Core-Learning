#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

bool check(double a, double b, double c)
{
    if (a+b > c && a+c > b && a+c > a) {
        return 1;
    }
    return 0;
}

main()
{
    //check tam giac
    double a,b,c;
    cin >> a >> b >> c;

    if (check(a,b,c)) {
        cout << "TAM-GIAC-HOP-LE";
    } else {
        cout << "TAM-GIAC-KHONG-HOP-LE";
    }
}
