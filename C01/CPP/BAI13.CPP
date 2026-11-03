#include <bits/stdc++.h>

using namespace std;

float max(float x, float y)
{
	return (x>y) ? x : y;
	//• (x > y): So sánh xem x có lớn hơn y hay không.
    //• ? x : y:
	//• Nếu điều kiện đúng (x > y), hàm trả về x.
	//• Nếu điều kiện sai (x <= y), hàm trả về y.

}

main()
{
    float a,b,c,d;
    cin >> a >> b >> c >> d;
    float ans = max(max(max(a,b),c),d);
    cout << ans;
}
