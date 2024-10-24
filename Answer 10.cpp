#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    string department;
    string course;
public:
    Student(string n, int a, string dept, string crs) : name(n), age(a), department(dept), course(crs) {}

    // Friend function declaration
    friend void displayDetails(Student student);
};

// Friend function definition
void displayDetails(Student student) {
    cout << "Student Details: " << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Department: " << student.department << endl;
    cout << "Course: " << student.course << endl;
}

int main() {
    Student student("John Doe", 21, "Computer Science", "BSc");
    displayDetails(student);  // Friend function call

    return 0;
}
