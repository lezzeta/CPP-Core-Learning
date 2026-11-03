#include <iostream>
#include <cstdlib>

using namespace std;

char func(char ch)
{
	if ( (ch >= 'A') && (ch <= 'Z'))
		return ch+32;
	return ch-32;
}
main()
{
    char ch;
    cin >> ch;
    char ans = func(ch);
    cout << ans;

}
