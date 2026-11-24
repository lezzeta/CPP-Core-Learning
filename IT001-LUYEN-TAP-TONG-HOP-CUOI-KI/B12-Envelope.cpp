#include <iostream>
#include <algorithm>

using namespace std;

long long fold(long long paper, long long env) {
    long long steps = 0;
    while (paper > env) {
        paper = (paper + 1) / 2;
        steps++;
    }
    return steps;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m, h, w;
    if (cin >> n >> m >> h >> w) {
        long long ans1 = fold(n, h) + fold(m, w);
        long long ans2 = fold(n, w) + fold(m, h);
        cout << min(ans1, ans2) << "\n";
    }
    return 0;
}
