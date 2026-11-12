#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

// Hàm chuyển mảng 1 chiều sang mảng 2 chiều kích thước M x N
vector<vector<int>> convert1DTo2D(const vector<int>& flatArray, int M, int N) {
    if (flatArray.size() != static_cast<size_t>(M * N)) {
        throw invalid_argument("So luong phan tu cua mang 1D khong khop voi kich thuoc M x N!");
    }
    vector<vector<int>> matrix(M, vector<int>(N));

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            matrix[i][j] = flatArray[i * N + j];
        }
    }

    return matrix;
}

int main() {
    int M = 3, N = 4;
    vector<int> flatArray = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    try {
        vector<vector<int>> matrix = convert1DTo2D(flatArray, M, N);
        cout << "Mang 2D (" << M << "x" << N << ") sau khi chuyen doi:\n";
        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << matrix[i][j] << "\t";
            }
            cout << "\n";
        }
    } catch (const exception& e) {
        cerr << "Loi: " << e.what() << "\n";
    }

    return 0;
}
