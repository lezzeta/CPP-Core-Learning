#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int dem = 0;
    while (ss >> word)
    {
        dem++;
    }
    cout << dem;
    return 0;
}
