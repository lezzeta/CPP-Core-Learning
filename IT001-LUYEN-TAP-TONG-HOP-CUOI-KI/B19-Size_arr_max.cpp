#include <iostream>
using namespace std;

void solve(int* arr, int n);

int main(){
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    solve(arr, n);

    return 0;
}
void solve(int* arr, int n)
{
    int dem[101] = {0};
    for (int i = 0; i < n; i++) {
        dem[arr[i]]++;
    }
    int maxx = 0;
    for (int i = 0; i < 100; i++) {
        maxx = max(maxx, dem[i] + dem[i+1]);
    }
    cout << maxx;
}
