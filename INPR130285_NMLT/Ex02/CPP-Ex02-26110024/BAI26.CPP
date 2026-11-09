#include <bits/stdc++.h>

using namespace std;

int a,b,c;

void thutu(int a, int b, int c) {
    if (a > b) {
        swap(a,b);
    }
    if (a > c) {
        swap(a,c);
    }
    if (b > c) {
        swap(b,c);
    }
    cout << a <<" "<< b << " "<< c ;
}

main()
{
    cin >> a >> b >> c;
    thutu(a,b,c);

}
