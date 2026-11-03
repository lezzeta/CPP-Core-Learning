#include <iostream>
#include <cstdlib>

using namespace std;

int min(int a, int b, int c)
{
	if ((a<=b)&&(a<=c))
		return a;
	if ((b<=a)&&(b<=c))
			return b;
	return c;
}

main()
{
    int a,b,c;
    cin >> a >> b >> c;
    cout << min(a,b,c);


}
