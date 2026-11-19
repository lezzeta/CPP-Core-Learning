#include <bits/stdc++.h>

using namespace std;

//a ma ko b
void anotb(int a[], int b[])
{

}

//a va b
void aandb(int a[], int b[])
{

}
int main()
{
    int n; int a[n+5]; int b[n+5];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] == b[j]) {
                continue;
            }
            cout << a[i] << " ";
        }

    }
}
