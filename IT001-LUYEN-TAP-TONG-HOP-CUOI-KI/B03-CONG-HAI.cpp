#include <iostream>
using namespace std;

int main()
{
    int a1, d1, a2, d2;
    char g1, g2;
    cin >> a1 >> g1 >> d1 >> a2 >> g2 >> d2;

    int n1 = a1 * 1000 + d1;
    int n2 = a2 * 1000 + d2;
    int tong = n1 + n2;

    cout << a1 << '_' << (d1 / 100) << ((d1 / 10) % 10) << (d1 % 10)
         << " + "
         << a2 << '_' << (d2 / 100) << ((d2 / 10) % 10) << (d2 % 10)
         << " = " << tong << '\n';


    return 0;
}
