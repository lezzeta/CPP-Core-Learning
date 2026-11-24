
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long n,i;
    double tong = 0.0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        tong+=1.0/(i*i);
    }

    cout << fixed << setprecision(6);
    cout << "Tong Basel den " << n << " = " << tong << '\n';
    return 0;
}
