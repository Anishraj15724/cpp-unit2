#include <iostream>
#include <string>
using namespace std;

const int MAX_EMPLOYEES = 10;

class Employee {
public:
    string name;
    int attendanceStatus;

    Employee() {
        name = "";
        attendanceStatus = 0;
    }
};

int main() {
    int n;
    cin >> n;

    Employee employees[MAX_EMPLOYEES];

    for (int i = 0; i < n; i++) {
        cin >> employees[i].name >> employees[i].attendanceStatus;
    }

    cout << "Attendance Report:" << endl;
    for (int i = 0; i < n; i++) {
        cout << employees[i].name << ": ";
        if (employees[i].attendanceStatus == 1) {
            cout << "Present" << endl;
        } else {
            cout << "Absent" << endl;
        }
    }

    return 0;
}
