#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

string ma(string bin) {
    if (bin == "0000") return "0";
    if (bin == "0001") return "1";
    if (bin == "0010") return "2";
    if (bin == "0011") return "3";
    if (bin == "0100") return "4";
    if (bin == "0101") return "5";
    if (bin == "0110") return "6";
    if (bin == "0111") return "7";
    if (bin == "1000") return "8";
    if (bin == "1001") return "9";
    if (bin == "1010") return "A";
    if (bin == "1011") return "B";
    if (bin == "1100") return "C";
    if (bin == "1101") return "D";
    if (bin == "1110") return "E";
    if (bin == "1111") return "F";
    return "";
}

string chuyen(string n) {
    int chia = n.length() % 4;
    if (chia != 0) {
        n = string(4 - chia, '0') + n;
    }
    string res = "";

    for (int i = 0; i < n.length(); i += 4) {
        string dai = n.substr(i, 4);
        res += ma(dai);
    }

    return res;
}

int main() {
    string n;
    cout << "nhap so nhi phan ";
    cin >> n;

    string hexNum = chuyen(n);
    cout << "so thap luc phan tuong ung " << hexNum << endl;

    return 0;
}


/*
0000=0,
0001=1,
0010=2,
0011=3,
0100=4,
0101=5,
0110=6,
0111=7,
1000=8,
1001=9,

1010=A,
1011=B,
1100=C,
1101=D,
1110=E,
1111=F.
*/
