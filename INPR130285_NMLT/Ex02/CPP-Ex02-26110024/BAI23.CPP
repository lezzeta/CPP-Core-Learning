#include <bits/stdc++.h>

using namespace std;

long long n;

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2]; // Công thức quy hoạch động
    }
    return fib[n];
}


main()
{

    cin >> n;
}
