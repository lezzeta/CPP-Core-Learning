#include <iostream>
#include <cstdlib>

using namespace std;

main()
{
    //Nhập vào một năm. Cho biết năm đó có nhuận không?
    int nam;
    cin >> nam;
    if (nam % 4 == 0) {
        cout << "NAM-NHUAN";
    }
    else if (nam % 400 == 0) {
        cout << "NAM-NHUAN";
    }
    else {
        cout << "NAM-KHONG-NHUAN";
    }
}
