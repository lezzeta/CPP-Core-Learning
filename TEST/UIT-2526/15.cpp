#include <bits/stdc++.h>

using namespace std;

int check (int n)
{

}

int main()
{
    int n; cin >> n;
    if (n < 10) {
        cout << "Khong du tien de mua nuoc\n";
    }

    while(n)
    {
        int chon;
        cin >> chon;

        if (chon == 1) {
            n-=10;
        }
        else if (chon == 2) {
            n-=10;
        }
        else if (chon == 3) {
            n-=10;
        }
    }
}
