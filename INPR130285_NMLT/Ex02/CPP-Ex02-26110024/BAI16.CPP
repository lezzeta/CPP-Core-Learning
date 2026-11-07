#include <bits/stdc++.h>

using namespace std;

double x,y;
double tx,ty;

main()
{
    cin >> x >> y;
    cin >> tx >> ty;
    double sx = x * tx;
    double sy = y * ty;

    double khoangcach = sqrt(sx*sx + sy*sy);
    cout << khoangcach;


}
