#include<bits/stdc++.h>

using namespace std;
void Nhap(double &dai, double &rong)
{
    cin >> dai >> rong;
}
double Tinh(double dai, double rong)
{
    return 2*(dai+rong);
}

main()
{
    double dai,rong;
    Nhap(dai,rong);
    double ans = Tinh(dai,rong);
    cout << ans << endl;
}
