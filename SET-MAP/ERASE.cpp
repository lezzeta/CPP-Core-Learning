#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40, 50};

    // Xóa phần tử có giá trị 30
    s.erase(30);

    // Thử xóa giá trị 99
    s.erase(99);

    cout << "Set sau khi xoa 30: ";
    for (int x : s) {
        cout << x << " "; // Kết quả: 10 20 40 50
    }
    return 0;
}
