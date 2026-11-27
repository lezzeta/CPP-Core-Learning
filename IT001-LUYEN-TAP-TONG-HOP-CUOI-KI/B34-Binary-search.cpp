#include <bits/stdc++.h>

using namespace std;

int a[100005];
int n;

bool tknp(int a[], int n, int x)
{
    int l = 0;
    int r = n-1;

    while (l <= r)
    {
        int mid = (l+r)/2;
        if(a[mid] == x) {
            return true;
        }
        else if (a[mid] < x) {
            l = mid+1;
        }
        else {
            r = mid-1;
        }
    }
    return false;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    int q;
    cin >> q;
    while(q--)
    {
        int x; cin >> x;
        if (tknp(a,n,x)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
