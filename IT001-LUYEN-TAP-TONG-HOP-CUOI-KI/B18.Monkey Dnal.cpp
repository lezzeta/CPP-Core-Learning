#include <bits/stdc++.h>

using namespace std;
int arr[1005][1005];
int main()
{
    int n,m;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    bool danhdau[1005][1005];
    for (int i = 1; i < m-1; i++) {
        for (int j = 1; j < n-1; j++) {
            if (arr[i][j] > arr[i-1][j] && arr[i][j] > arr[i+1][j] && arr[i][j] > arr[i][j-1] && arr[i][j] > arr[i][j+1]) {
                danhdau[i][j] = true;
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if(danhdau[i][j]) {
                cout << 'X' << " ";
            }
            else {
                cout << arr[i][j] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
