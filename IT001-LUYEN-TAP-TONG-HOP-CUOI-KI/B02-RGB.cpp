
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int R, G, B;
    cin >> R >> G >> B;
    double Y = 0.299*R + 0.587*G + 0.114*B;
    cout << fixed << setprecision(2);
    cout << "Gia tri grayscale: " << Y;

    return 0;
}
