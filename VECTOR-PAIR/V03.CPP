#include <bits/stdc++.h>

using namespace std;

main()
{
    // Tạo một vector lưu trữ 5 số thực do người dùng nhập từ bàn phím. Sau đó, tìm và in ra số lớn nhất trong vector đó.
    int n; cin >> n;
    vector<double>ds;
    while(n--) {
        double x;
        cin >> x;
        ds.push_back(x);
    }
    double maxx = 0.0;
    for (int i = 0; i < ds.size(); i++) {
        if (ds[i] > maxx) {
            maxx=ds[i];
        }
    }
    cout << maxx;
}
