#include <iostream>
using namespace std;

class ReverseArray {
private:
    int* arr;
    int size;

public:
    ReverseArray(int* inputArr, int inputSize) {
        this->arr = inputArr;
        this->size = inputSize;
    }

    void reverse() {
        for (int i = 0; i < this->size / 2; i++) {
            swap(this->arr[i], this->arr[this->size - 1 - i]);
        }
    }

    void display() {
        cout << "Reversed Array: ";
        for (int i = 0; i < this->size; i++) {
            cout << this->arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int n;
    cin >> n;

    int arr[50];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ReverseArray ra(arr, n);
    ra.reverse();
    ra.display();

    return 0;
}
