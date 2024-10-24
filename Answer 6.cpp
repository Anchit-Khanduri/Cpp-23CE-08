#include <iostream>
using namespace std;

class Base {
protected:
    int a, b;
public:
    Base(int x, int y) : a(x), b(y) {}
};

// First derived class
class Derived1 : public Base {
public:
    Derived1(int x, int y) : Base(x, y) {}

    void displayFirst() {
        cout << "Sum in first derived class: " << a + b << endl;
    }
};

// Second derived class
class Derived2 : public Base {
public:
    Derived2(int x, int y) : Base(x, y) {}

    void displaySecond() {
        cout << "Product in second derived class: " << a * b << endl;
    }
};

int main() {
    Derived1 obj1(10, 20);
    obj1.displayFirst();

    Derived2 obj2(10, 20);
    obj2.displaySecond();

    return 0;
}
