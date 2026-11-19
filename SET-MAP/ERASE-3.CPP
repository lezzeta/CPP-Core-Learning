#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40, 50};

    auto it1 = s.find(20);
    auto it2 = s.find(50);

    // Xóa các phần tử từ 20 đến trước 50 (tức là xóa 20, 30, 40)
    s.erase(it1, it2);

    cout << "Set sau khi xoa doan: ";
    for (int x : s) {
        cout << x << " "; // Kết quả: 10 50
    }
    return 0;
}
