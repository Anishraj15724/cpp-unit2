#include <iostream>
#include <algorithm>

using namespace std;

void findIntersection(int* arr1, int size1, int* arr2, int size2, int& sizeIntersection, int* intersection) {
    sizeIntersection = 0;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                intersection[sizeIntersection] = arr1[i];
                sizeIntersection++;
            }
        }
    }
}

int main() {
    int size1;
    cin >> size1;
    int arr1[size1];
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    int size2;
    cin >> size2;
    int arr2[size2];
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    int sizeIntersection;
    int intersection[max(size1, size2)];
    findIntersection(arr1, size1, arr2, size2, sizeIntersection, intersection);

    if (sizeIntersection == 0) {
        cout << "No common IDs found." << endl;
    } else {
        for (int i = 0; i < sizeIntersection; i++) {
            cout << intersection[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
