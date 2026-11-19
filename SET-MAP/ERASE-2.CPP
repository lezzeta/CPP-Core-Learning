#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40, 50};

    // Tìm vị trí của phần tử 20
    auto it = s.find(20);

    if (it != s.end()) {
        s.erase(it);
    }
    for (int x : s) {
        cout << x << " ";
    }
    return 0;
}
