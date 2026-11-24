#include <bits/stdc++.h>

using namespace std;

bool check_tri(int n)
{
    if (n <= 0)
    {
        return false;
    }
    int val = 8 * n + 1;
    int root = round(sqrt(val));
    return root * root == val;

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int>tg;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (check_tri(x)) {
            tg.push_back(x);
        }
    }
    if (tg.empty()) {
        cout << "-";
    }
    else {
        for (int i = 0; i < tg.size(); i++) {
            cout << tg[i] << " ";
        }
    }

}
