#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 10) {
        cout << "Khong du tien de mua nuoc\n";
        return 0;
    }
    string menu[] = {"", "cam", "tao", "mia"};
    vector<string> ds;
    while (true) {
        int chon;
        cin >> chon;

        if (chon == 0) {
            break;
        }

        if (chon >= 1 && chon <= 3) {
            if (n >= 10) {
                n -= 10;
                ds.push_back(menu[chon]);
                if (n < 10) {
                    cout << "Khong du tien de mua them nuoc\n";
                    cout << "So tien thua con lai la: " << n << "\n";
                    cout << "Nhan 0 de xac nhan mua hang\n";
                }
            }
            else {
                cout << "Khong du tien! Vui long nhan 0 de xac nhan mua hang\n";
            }
        }
        else {
            cout << "Lua chon khong hop le! Vui long chon lai\n";
        }
    }

    cout << "Tien thua: " << n << "\n";
    cout << "Danh sach hoa don mua nuoc:\n";
    for (const string& nuoc : ds) {
        cout << nuoc << " ";
    }

    return 0;
}
