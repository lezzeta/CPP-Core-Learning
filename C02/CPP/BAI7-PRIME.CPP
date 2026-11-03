#include <bits/stdc++.h>

using namespace std;
const int M = 5e6 + 1;
int n;
int a[1000006];
int prime[M];

void sang_nt() {
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
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    sang_nt();
    if(prime[n] == true) {
        cout << "la so nguyen to";
    }
    else {
        cout << "ko phai la so nguyen to";
    }

}
