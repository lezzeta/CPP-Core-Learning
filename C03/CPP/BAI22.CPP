#include <bits/stdc++.h>

using namespace std;

int n;
int a[1000005];

int increase(int a[], int n)
{
	for (int i=0;i<n-2;i++)
		if (a[i]>a[i+1]) return 0;
	return 1;
}

main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int ans = increase(a,n);
    if (ans) {
        cout << "Mang tang dan";
    }
    else {
        cout << "Mang khong tang dan";
    }

}
