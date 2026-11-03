#include <bits/stdc++.h>
using namespace std;

void tinhGiaiThuaLon(int n) {
    vector<int> res;
    res.push_back(1);

    int i = 2;
    while (i <= n) {
        int nho = 0;
        int j = 0;
        int size = res.size();

        while (j < size) {
            int prod = res[j] * i + nho;
            res[j] = prod % 10;
            nho = prod / 10;
            j++;
        }

        while (nho) {
            res.push_back(nho % 10);
            nho /= 10;
        }
        i++;
    }
    int k = res.size() - 1;
    while (k >= 0) {
        cout << res[k];
        k--;
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        if (n < 0) {
            cout << "Khong tinh duoc giai thua cua so am";
        } else if (n == 0 || n == 1) {
            cout << 1;
        } else {
            tinhGiaiThuaLon(n);
        }
    }
    return 0;
}
