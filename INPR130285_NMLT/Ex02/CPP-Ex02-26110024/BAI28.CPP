#include <bits/stdc++.h>

using namespace std;

double c;

void LCD(double c)
{
    cout << "LCD" << endl;
    double x = sqrt(c*c / (1.0+81.0/256.0));
    double y = (9.0/16.0)*x;
    double s = x*y;
    cout << "chieu dai: " << x << '\n';
    cout << "chieu rong: " << y << '\n';
    cout << "dien tich: "<< s << '\n';
}

void Truyenthong(double c)
{
    cout << "Truyen thong" << endl;
    double x = sqrt(c*c / (1.0+9.0/24.0));
    double y = (3.0/4.0)*x;
    double s = x*y;
    cout << "chieu dai: " << x << '\n';
    cout << "chieu rong: " << y << '\n';
    cout << "dien tich: "<< s << '\n';
}


main()
{
    /*
    16:9
    chieu dai la x
    chieu rong la (9/16)*x
    4:3
    chieu dai la x
    chieu rong la (3/4)*x
    nhap do dai duong cheo: c = 8
    --> c*c = x*x+(9/16)x*(9/16)x --> c*c = x*x(1+81/256) --> sqrt(c*c / (1+81/256)) = x --> y = (9/16)x
    --> c*c =
    */
    cin >> c;
    LCD(c);
    Truyenthong(c);
}
