#include <bits/stdc++.h>

using namespace std;

main()
{
    int n; cin >> n;
    int a[n+1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    int m; cin >> m;
    int b[m+1];
    for (int j = 1; j <= m; j++) cin >> b[j];
    int i = 1, j = 1;
    while(i <= n && j <= m)
    {
        cout << a[i] <<" "<<b[j] << " ";
        i++;
        j++;
    }
    while (i <= n) {
        cout << a[i] << " ";
        i++;
    }
    while (j <= m) {
        cout << b[j] << " ";
        j++;
    }
}
