#include <iostream>
using namespace std;

class Student {
    string name;
    int age;
    string department;
    string course;
public:
    Student(string n, int a, string d, string c) : name(n), age(a), department(d), course(c) {}

    friend void displayDetails(const Student &s);
};

void displayDetails(const Student &s) {
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Department: " << s.department << endl;
    cout << "Course: " << s.course << endl;
}

int main() {
    Student s("Anchit", 20, "Computer Science", "B.Tech");
    displayDetails(s);
    return 0;
}
