#include <bits/stdc++.h>

using namespace std;

const int M = 1005;
int prime[M];
int n;


bool check1000(int n) {
    if (n < 1 || n > 1000) {
        return false;
    }
    return true;
}

void sang_nt(int n) {
	for (int i = 1; i <= n; i++) {
		prime[i] = true;

	}
	prime[1] = false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (prime[i])
			for (int j = i*i; j <= n; j += i)
				prime[j] = false;
	}
}
main()
{
    cin >> n;
    int dem = 0;
    if (check1000(n) == 0) {
        cout << "khong tinh dc";
    }
    sang_nt(1000);
    if (prime[n]) {
        cout << "Day la so nguyen to";
    }
    else {
        for (int i = 2; i <= 31; i++) {
            if (prime[i] && n % i == 0) {
                cout << i << " ";
                dem++;
            }
        }
        if (dem == 0) {
            cout << "Day khong la so nguyen to "
                 << "va khong chia het cho so nguyen to tu 2 -> 31";
        }
    }

}
