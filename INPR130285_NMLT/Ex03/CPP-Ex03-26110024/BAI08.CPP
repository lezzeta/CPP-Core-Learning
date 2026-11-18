#include <bits/stdc++.h>
using namespace std;

bool laNamNhuan(int y) {
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

int soNgayTrongThang(int m, int y) {
    switch (m) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return laNamNhuan(y) ? 29 : 28;
        default:
            return 0; // Thang khong hop le
    }
}

int main() {
    int d, m, y;
    cout << "Nhap ngay, thang, nam (d m y): ";
    cin >> d >> m >> y;

    int maxNgay = soNgayTrongThang(m, y);
    if (y < 1 || m < 1 || m > 12 || d < 1 || d > maxNgay) {
        cout << "Ngay thang nam KHONG hop le!" << endl;
    } else {
        cout << "Ngay thang nam hop le." << endl;
        d++;
        if (d > maxNgay) {
            d = 1;
            m++;
            if (m > 12) {
                m = 1;
                y++;
            }
        }

        cout << "Ngay tiep theo la: " << d << "/" << m << "/" << y << endl;
    }

    return 0;
}
