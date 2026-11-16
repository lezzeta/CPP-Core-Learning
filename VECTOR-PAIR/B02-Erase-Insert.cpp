#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>ds;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ds.push_back(x);
    }
    int q;
    cin >> q;
    while(q--)
    {
        int k;
        cin >> k;
        if (k == 1) {
            int vitri, phantu;
            cin >> vitri >> phantu;
            if (vitri < 0 || vitri > ds.size()) continue;

            ds.insert(ds.begin() + vitri, phantu);
        }
        else if (k == 2) {
            int vitri;
            cin >> vitri;
            if (vitri < 0 || vitri >= ds.size()) continue;

            ds.erase(ds.begin() + vitri);
        }
    }
    if (ds.empty()) {
        cout << "EMPTY";
    }
    else {
        for (int i = 0; i < ds.size(); i++) {
            cout << ds[i] << " ";
        }
    }
    return 0;
}
