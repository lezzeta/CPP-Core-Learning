#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>>v(n);
    double kc = 0.0;
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    for (int i = 0; i < n; i++) {
        kc = sqrt(v[i].first*v[i].first + v[i].second*v[i].second);
        cout << fixed << setprecision(2);
        cout << kc << " ";
    }
    return 0;
}
