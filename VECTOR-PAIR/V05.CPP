#include <bits/stdc++.h>

using namespace std;

main()
{
    //Tạo một pair chứa (Tên đội bóng, Danh sách điểm số trong các trận đấu). Khởi tạo dữ liệu và tính điểm trung bình của đội bóng đó
    int n; cin >> n;
    vector<pair<string,double>>ds(n);
    double tb = 0.0;
    double tong = 0.0;
    for (int i = 0; i < ds.size(); i++) {
        cin >> ds[i].first >> ds[i].second;
        tong += ds[i].second;
    }
    tb = tong/n;
    cout << tb;

}
