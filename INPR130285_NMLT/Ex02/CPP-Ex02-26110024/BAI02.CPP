#include <bits/stdc++.h>

using namespace std;

int n;

main()
{
    cin >> n;
    int k = n;
    int ans = 0;
    while (n!=0){
        k = n%10;
        ans=ans*10+k;
        n = n/10;
        //cout << k << endl;

    }
    cout << ans;

}
