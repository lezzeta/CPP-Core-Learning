#include <bits/stdc++.h>
using namespace std;

int n;
double tong, phi, thanhToan;

double nhapTongTienHang(int n) {
    double gia;
    double tong = 0;

    for (int i = 1; i <= n; i++) {
        cout << "Nhap gia mat hang thu " << i << ": ";
        cin >> gia;
        tong += gia;
    }
    return tong;
}

double tinhPhiVanChuyen(double tong, int n) {
    if (tong >= 200) {
        return 0;
    }
    return 10 * n;
}

double tinhThanhToan(double tong, double phi) {
    return tong + phi;
}

void xuatHoaDon(double tong, double phi, double thanhToan) {
    cout << "Tong tien hang: " << tong << "$\n";
    cout << "Phi van chuyen: " << phi << "$\n";
    cout << "Tong thanh toan: " << thanhToan << "$\n";
}

int main() {
    cout << "Nhap so luong hang mua:" << " ";
    cin >> n;
    tong = nhapTongTienHang(n);
    phi = tinhPhiVanChuyen(tong, n);
    thanhToan = tinhThanhToan(tong, phi);
    xuatHoaDon(tong, phi, thanhToan);

    return 0;
}
