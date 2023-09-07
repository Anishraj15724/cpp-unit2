#include <iostream>
using namespace std;

class MatrixSwap {
public:
    int matrix[10][10];
    int n, m;

    void swapRows(int r1, int r2) {
        if (r1 > n || r2 > n) {
            cout << "Invalid row numbers" << endl;
            return;
        }

        for (int i = 0; i < m; i++) {
            int temp = matrix[r1 - 1][i];
            matrix[r1 - 1][i] = matrix[r2 - 1][i];
            matrix[r2 - 1][i] = temp;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    MatrixSwap ms;
    cin >> ms.n >> ms.m;

    for (int i = 0; i < ms.n; i++) {
        for (int j = 0; j < ms.m; j++) {
            cin >> ms.matrix[i][j];
        }
    }

    int r1, r2;
    cin >> r1 >> r2;

    ms.swapRows(r1, r2);

    return 0;
}