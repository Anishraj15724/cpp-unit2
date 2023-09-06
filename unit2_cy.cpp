#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[10]; // Assuming a maximum array size of 10
    int *ptr = arr;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long product = 1; // Initialize the product to 1

    for (int i = 0; i < n; i++) {
        if (*(ptr + i) % 2 == 0) {
            product *= *(ptr + i);
        }
    }

    if (product != 1) {
        cout << "Product of even elements: " << product << endl;
    } else {
        cout << "Invalid input" << endl;
    }

    return 0;
}
