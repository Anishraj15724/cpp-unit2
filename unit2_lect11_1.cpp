#include <iostream>
using namespace std;

int main() {
    int M;
    cin >> M;

    // Input for the first matrix
    int matrix1[M][M];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Input for the second matrix
    int matrix2[M][M];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Initialize the result matrix with zeros
    int result[M][M];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < M; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Output the product of the two matrices
    cout << "The product of the two matrices is:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            cout << result[i][j];
            if (j < M - 1) {
                cout << "\t";
            } else {
                cout << endl;
            }
        }
    }

    return 0;
}
