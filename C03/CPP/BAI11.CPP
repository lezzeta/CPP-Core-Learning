#include <bits/stdc++.h>

using namespace std;

main()
{
    double xa,xb,ya,yb;
    cin >> xa >> xb >> ya >> yb;
    double tongbinhphuong = pow((xa-xb),2) + pow((ya-yb),2);
    double khoangcach = pow(tongbinhphuong,0.5);
    cout << fixed << setprecision(2);
    cout << khoangcach;
}
