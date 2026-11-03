#include <iostream>
#include <cstdlib>

using namespace std;

int h,m,s;

main()
{
    cin >> h >> m >> s;
    int check_h = 0, check_m = 0, check_s = 0;
    if (h >= 0 && h <= 23) {
        check_h = 1;
    }
    if (m >= 0 && m <= 60) {
        check_m = 1;
    }
    if (s >= 0 && s <= 60) {
        check_s = 1;
    }
    int total = check_m + check_h + check_s;
    if (total == 3){
        cout << "Hop-le";
    }
    else {
        cout << "Khong-Hop-le";
    }
}
