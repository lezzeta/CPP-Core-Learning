#include <bits/stdc++.h>

using namespace std;

main()
{
    double a,b,c;
    double giaa, giab, giac;
    cin >> a;
    cin >> giaa;
    cin >> b;
    cin >> giab;
    cin >> c;
    cin >> giac;

    double ma,mb,mc;
    ma = a/giaa;
    mb = b/giab;
    mc = c/giac;

    if (ma > mb) {
        swap(ma,mb);
    }
    if (ma > mc) {
        swap(ma,mc);
    }
    if (mb > mc) {
        swap(mb,mc);
    }
    cout << "thap nhat: " << mc;

}
