#include <iostream>
using namespace std;

void xuatMang(int a[], int n) {
    for (int k = 0; k < n; k++) {
        cout << a[k] << " ";
    }
    cout << "\n";
}

void capNhat(int a[], int n, int i, int giaTriMoi) {
    if (i < 0 || i >= n) {
        cout << "Vi tri i khong hop le!\n";
        return;
    }
    a[i] = giaTriMoi;
}

void xoaPhanTu(int &n, int a[], int i) {
    if (i < 0 || i >= n) {
        cout << "Vi tri i khong hop le!\n";
        return;
    }
    for (int k = i; k < n - 1; k++) {
        a[k] = a[k + 1];
    }
    n--;
}

void chenSau(int &n, int a[], int maxSze, int i, int x) {
    if (i < 0 || i >= n) {
        cout << "Vi tri i khong hop le!\n";
        return;
    }
    if (n >= maxSze) {
        cout << "Mang da day, khong the chen them!\n";
        return;
    }
    int viTriChen = i + 1;
    for (int k = n; k > viTriChen; k--) {
        a[k] = a[k - 1];
    }
    a[viTriChen] = x;
    n++;
}

int main() {
    const int MAX = 100;
    int a[MAX];
    int n = 0;

    cout << "Nhap so luong phan tu ban dau n: ";
    cin >> n;

    cout << "Nhap cac phan tu cua mang:\n";
    for (int k = 0; k < n; k++) {
        cout << "A[" << k << "] = ";
        cin >> a[k];
    }

    cout << "\nMang ban dau: ";
    xuatMang(a, n);

    int i;
    cout << "\nNhap vi tri i can thao tac (0 <= i < " << n << "): ";
    cin >> i;

    int giaTriMoi;
    cout << "Nhap gia tri moi de cap nhat tai vi tri " << i << ": ";
    cin >> giaTriMoi;
    capNhat(a, n, i, giaTriMoi);
    cout << "Mang sau khi cap nhat tai vi tri " << i << ": ";
    xuatMang(a, n);

    int x;
    cout << "\nNhap so nguyen x can chen sau vi tri " << i << ": ";
    cin >> x;
    chenSau(n, a, MAX, i, x);
    cout << "Mang sau khi chen " << x << " vao sau vi tri " << i << ": ";
    xuatMang(a, n);

    cout << "\nThuc hien xoa phan tu tai vi tri " << i << ":\n";
    xoaPhanTu(n, a, i);
    cout << "Mang sau khi xoa tai vi tri " << i << ": ";
    xuatMang(a, n);

    return 0;
}
