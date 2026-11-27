#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string w1,w2;
    getline(cin,w1);
    getline(cin,w2);
    if(!w1.empty())
    {
        size_t pos = 0;

        while ((pos = s.find(w1,pos)) != string::npos) {
            s.replace(pos,w1.length(),w2);
            pos += w2.length();
        }
    }



    cout << s;



    return 0;
}
