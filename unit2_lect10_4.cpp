#include <iostream>
using namespace std;

// Function to allocate memory for an integer and store the value
int* allocateInteger(int value) {
    int* ptr = new int(value);
    return ptr;
}

int main() {
    int num1;
    cin >> num1;

    int* intPointer = allocateInteger(num1);

    // Print the value pointed to by intPointer
    cout << "Value: " << *intPointer << endl;

    // Deleting the memory pointed to by intPointer (intentional dangling pointer)
    delete intPointer;

    // Attempt to print the value pointed to by intPointer (dangling pointer)
    cout << "Error: Dangling pointer detected!" << endl;

    return 0;
}
