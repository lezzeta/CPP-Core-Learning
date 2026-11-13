#include <bits/stdc++.h>

using namespace std;

const int M = 5e6+1;
int prime[M];

void sang_nt()
{
    for (int i = 1; i <= M; i++) {
        prime[i] == true;
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
    int a[n+5];
    cin >> n;
    sang_nt();
    int total = 0, dem = 0;
    for (int i = 1; i<=n; i++) {
        cin >> a[i];
        if (prime[a[i]] == true) {
            dem++;
            total+=a[i];
        }
    }
    cout << total/dem;


}
