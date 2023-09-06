#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Student {
public:
    string name;
    int numSubjects;
    double marks[10];

    Student(string name, int numSubjects, double marks[]) {
        this->name = name;
        this->numSubjects = numSubjects;
        for (int i = 0; i < numSubjects; i++) {
            this->marks[i] = marks[i];
        }
    }

    double averageMarks() {
        double sum = 0;
        for (int i = 0; i < numSubjects; i++) {
            sum += marks[i];
        }
        return sum / numSubjects;
    }
};

int main() {
    int numStudents;
    cin >> numStudents;

    Student *students[numStudents];
    for (int i = 0; i < numStudents; i++) {
        string name;
        getline(cin >> ws, name);

        int numSubjects;
        cin >> numSubjects;

        double marks[numSubjects];
        for (int j = 0; j < numSubjects; j++) {
            cin >> marks[j];
        }

        students[i] = new Student(name, numSubjects, marks);
    }

    cout << "Student Details:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << "Name: " << students[i]->name << endl;
        cout << "Average marks: " << fixed << setprecision(2) << students[i]->averageMarks() << endl;
    }

    return 0;
}
