#include <bits/stdc++.h>

using namespace std;

bool check_nev()
{
    int dem = 0;
    int dai = ds.size();
    for (int i = 1; i < dai; i++) {
        if (ds[i] < 0) {
            dem++;
        }
    }
    if (dem == dai) {
        return 1;
    }
    return 0;
}
int main()
{
    vector<vector<int>>ds;
    string s;

    while(getline(cin,s))
    {
        if(s.empty()) continue;

        stringstream ss;
        vector<int>row;
        int num;
        while (ss >> num) {
            row.push_back(num);
        }
        if (!row.empty()) {
            ds.push_back(row);
        }
    }

    return 0;
}


