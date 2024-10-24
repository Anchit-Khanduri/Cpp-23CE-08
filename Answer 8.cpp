#include <iostream>
using namespace std;

class Student {
public:
    // Inline function
    inline void sum(int a, int b) {
        cout << "Sum of two numbers: " << a + b << endl;
    }
};

int main() {
    Student student;
    student.sum(15, 25); // Call inline function

    return 0;
}
