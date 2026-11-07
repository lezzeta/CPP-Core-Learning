#include <bits/stdc++.h>

using namespace std;

int n,m;

main()
{
    cin >> n >> m;
    int maxx = max(n,m);
    while(maxx > 0) {
        if(maxx % n == 0 && maxx % m == 0) {
            cout << maxx;
            break;
        }
        maxx++;
    }


}
