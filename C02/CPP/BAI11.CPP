#include <bits/stdc++.h>
using namespace std;

int n;

bool doixung(int n)
{
    int check = n;
    long long rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n/=10;
    }
    if (check == rev) {
        return 1;
    }
    return 0;
}

int main() {
    cin >> n;
    if (doixung(n)) {
        cout << n << " " << "la so doi xung";
    }
    else {
        cout << n << " " << "khong la so doi xung";
    }


}

//KIEM TRA SO DOI XUNG
//CHECK FOR PALINDROMIC NUMBER
