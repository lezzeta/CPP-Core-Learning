#include <bits/stdc++.h>

using namespace std;

main()
{
    //Tạo một vector lưu trữ các cặp (tên thành phố, dân số). Nhập dữ liệu cho 3-4 thành phố. In ra tên thành phố có dân số lớn nhất.

    int n;
    cin >> n;
    long long maxx = 0;
    long long maxs = 0;
    vector<pair<string,long long>>tp(n);
    for (int i = 0; i < tp.size();i++) {
        cin >> tp[i].first >> tp[i].second;
        if (tp[i].second > maxx) {
            maxx = tp[i].second;
            maxs = i;
        }
    }
    /*
    for (int i = 0; i < tp.size(); i++) {
        cout << tp[i].first << " " << tp[i].second << endl;
    }
    */
    cout << tp[maxs].first << " " << tp[maxs].second;

}
