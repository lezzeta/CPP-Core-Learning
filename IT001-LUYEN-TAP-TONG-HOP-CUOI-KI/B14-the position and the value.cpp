#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int>ds;
    int x;
    while(cin >> x)
    {
        ds.push_back(x);
    }
    int dem = 0;
    for (int i = 0; i < (int)ds.size(); i++) {
        if (ds[i] % 2 == 0) {
            cout << i << " " << ds[i] << endl;
            dem++;
        }
    }
    if (dem == 0) {
        cout << "-";
    }
    return 0;

}
