#include <bits/stdc++.h>

using namespace std;

const int M = 5e+1;

int a[1000005];
int prime[M];
void sang_nt()
{
    for (int i = 1; i <= M; i++) {
		prime[i] = true;

	}
	prime[1] = false;
	for (int i = 2; i <= sqrt(M); i++) {
		if (prime[i])
			for (int j = i*i; j <= M; j += i)
				prime[j] = false;
	}
}
main()
{
    int n;
    cin >> n;
    int dem = 0;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sang_nt();
    for (int i = 1; i <= n; i++) {
        if (prime[a[i]] == true) {
            dem++;
        }
    }
    cout << dem;

}
