#include<bits/stdc++.h>

using namespace std;

int n;
int total = 0;
int a,b;

main()
{
    cin >> a >> b >> n;
    if (a > n || b >> n) {
        cout << "ERORR";
    }
    else {
        for (int i = a; i < n; i++) {
            if (i % a == 0 && i % b != 0) {
                total+=i;
            }
        }
    }
    cout << total;

}
