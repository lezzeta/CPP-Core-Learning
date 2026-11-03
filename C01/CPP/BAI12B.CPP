// Nhập một câu bằng tiếng anh. Nếu là chữ thường thì đổi sang chữ hoa, ngược lại đổi sang chữ thường.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    cout << "Nhap mot cau tieng Anh: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }

    cout << "Cau sau khi chuyen doi: " << s;
}
