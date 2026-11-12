#include <bits/stdc++.h>

using namespace std;

int n;
int a[1000005];

void xuatmang(int a[], int n) {
    if (n == 0) {
        cout << "Mang rong!" << endl;
        return;
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int timkiem(int a[], int n, int x) {
    for (int i = 1; i <= n; i++) {
        if (x == a[i]) {
            return i;
        }
    }
    return -1;
}

bool themphantu(int a[], int &n, int pos, int x) {
    if (pos < 1 || pos > n + 1) {
        return false;
    }
    for (int i = n; i >= pos; i--) {
        a[i + 1] = a[i];
    }
    a[pos] = x;
    n++;
    return true;
}

bool xoaphantu(int a[], int &n, int pos) {
    if (pos < 1 || pos > n) {
        return false;
    }
    for (int i = pos; i < n; i++) {
        a[i] = a[i + 1];
    }
    n--;
    return true;
}

bool suaphantu(int a[], int n, int pos, int x) {
    if (pos < 1 || pos > n) {
        return false;
    }
    a[pos] = x;
    return true;
}

int main() {

    cout << "Nhap so luong phan tu ban dau (n): ";
    cin >> n;

    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int choice;
    do {
        cout << "\n================ MENU ================\n";
        cout << "1. Xem mang hien tai\n";
        cout << "2. Tim kiem phan tu\n";
        cout << "3. Them phan tu\n";
        cout << "4. Xoa phan tu\n";
        cout << "5. Sua phan tu\n";
        cout << "0. Thoat chuong trinh\n";
        cout << "======================================\n";
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "MANG HIEN TAI: ";
                xuatmang(a, n);
                break;
            }
            case 2: {
                int x;
                cout << "Nhap gia tri can tim (x): ";
                cin >> x;
                int vt = timkiem(a, n, x);
                if (vt != -1) {
                    cout << "Tim thay " << x << " tai vi tri thu " << vt << "\n";
                } else {
                    cout << "Khong tim thay " << x << " trong mang!\n";
                }
                break;
            }
            case 3: {
                int pos, x;
                cout << "Nhap vi tri muon them (tu 1 den " << n + 1 << "): ";
                cin >> pos;
                cout << "Nhap gia tri muon them: ";
                cin >> x;
                if (themphantu(a, n, pos, x)) {
                    cout << "Them thanh công!\nMang sau khi them: ";
                    xuatmang(a, n);
                } else {
                    cout << "Vi tri them khong hop le!\n";
                }
                break;
            }
            case 4: {
                int pos;
                cout << "Nhap vi tri muon xoa (tu 1 den " << n << "): ";
                cin >> pos;
                if (xoaphantu(a, n, pos)) {
                    cout << "Xoa thanh cong!\nMang sau khi xoa: ";
                    xuatmang(a, n);
                } else {
                    cout << "Vi tri xoa khong hop le!\n";
                }
                break;
            }
            case 5: {
                int pos, x;
                cout << "Nhap vi tri muon sua (tu 1 den " << n << "): ";
                cin >> pos;
                cout << "Nhap gia tri moi: ";
                cin >> x;
                if (suaphantu(a, n, pos, x)) {
                    cout << "Sua thanh cong!\nMang sau khi sua: ";
                    xuatmang(a, n);
                } else {
                    cout << "Vi tri sua khong hop le!\n";
                }
                break;
            }
            case 0:
                cout << "Tam biet!\n";
                break;
            default:
                cout << "Lua chon khong hop le! Vui long chon lai.\n";
        }
    } while (choice != 0);

    return 0;
}
