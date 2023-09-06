#include <iostream>
using namespace std;

class CompareValues {
private:
    int value;

public:
    CompareValues(int initialValue) {
        this->value = initialValue;
    }

    bool isEqual(CompareValues obj) {
        return this->value == obj.value;
    }
};

int main() {
    int obj1, obj2;
    cin >> obj1 >> obj2;

    CompareValues obj1Instance(obj1);
    CompareValues obj2Instance(obj2);

    if (obj1Instance.isEqual(obj2Instance)) {
        cout << "The values are equal." << endl;
    } else {
        cout << "The values are not equal." << endl;
    }

    return 0;
}
