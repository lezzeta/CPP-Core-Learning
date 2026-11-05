#include <bits/stdc++.h>

using namespace std;

//v = (4/3) * 3.141592  * r * r;
// s = 4 * pi
const double pi = 3.141592;
double r;

double Thetichhinhcau (double r)
{
    double v;
    v = (4/3)*pi*r*r;
    return v;
}

double Dientichbemat(double r)
{
    double s;
    s = 4 * pi * r * r;
    return s;
}

main()
{
    cin >> r;
    cout << "The tich hinh cau la" << " " << Thetichhinhcau(r) << endl;
    cout << "Dien tich be mat la" << " " << Dientichbemat(r) << endl;
}
