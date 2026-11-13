#include <bits/stdc++.h>

using namespace std;

const int M = 5e6+1;
int prime[M];
int dem = 0;
int a[1000005];
void sang_nt()
{
    for (int i = 1; i <= M; i++) {
        prime[i] = true;
    }
    prime[1] = false;
    for (int i = 2; i <= sqrt(M); i++) {
        if (prime[i]) {
            for (int j = i*i; j <= M; j+=i) {
                prime[j] = false;
            }
        }
    }
}

main()
{
    sang_nt();
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (prime[a[i]] == true) {
            cout << a[i];
            break;
        }
        dem++;
    }
    if (dem == n) {
        cout << -1;
    }



}
