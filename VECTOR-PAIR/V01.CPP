#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    // 1. Dùng reserve(10): Cấp phát trước sức chứa cho 10 phần tử
    v.reserve(10);
    cout << "Sau reserve(10): size = " << v.size()
         << ", capacity = " << v.capacity() << "\n";
    // -> size = 0 (vẫn rỗng, chưa có phần tử nào để truy cập v[0])
    // -> capacity = 10 (đã dành sẵn chỗ cho 10 số nguyên trên RAM)

    // Thêm thử 3 phần tử
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout << "Sau 3 lan push_back: size = " << v.size()
         << ", capacity = " << v.capacity() << "\n";
    // -> size = 3, capacity = 10 (không tốn công cấp phát lại bộ nhớ)

    // 2. Dùng resize(5, 99): Ép kích thước thực tế lên 5, điền số 99 vào chỗ mới
    v.resize(5, 99);
    cout << "Sau resize(5, 99): size = " << v.size()
         << ", capacity = " << v.capacity() << "\n";
    // -> size = 5, capacity = 10
    // Các phần tử hiện tại trong v là: {1, 2, 3, 99, 99}

    // Nếu resize nhỏ hơn size hiện tại -> Cắt bớt phần tử thừa ở cuối
    v.resize(2);
    cout << "Sau resize(2): size = " << v.size()
         << ", capacity = " << v.capacity() << "\n";
    // -> size = 2, capacity = 10 (capacity vẫn giữ nguyên là 10!)
    // Các phần tử hiện tại chỉ còn: {1, 2}

    // 3. Dùng shrink_to_fit(): Thu hồi phần bộ nhớ thừa đang không dùng tới
    v.shrink_to_fit();
    cout << "Sau shrink_to_fit(): size = " << v.size()
         << ", capacity = " << v.capacity() << "\n";
    // -> size = 2, capacity = 2 (tiết kiệm được bộ nhớ cho 8 phần tử dư thừa)

    return 0;
}
