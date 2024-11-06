#include <iostream>
using namespace std;

class Student {
public:
    inline int sum(int a, int b) {
        return a + b;
    }
};

int main() {
    Student s;
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum is: " << s.sum(a, b) << endl;
    return 0;
}
