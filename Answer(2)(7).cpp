#include <iostream>
using namespace std;

class Base {
public:
    virtual int sum(int a, int b, int c) {
        return a + b + c;
    }
};

class Derived : public Base {
public:
    int sum(int a, int b, int c) override {
        int result = Base::sum(a, b, c);
        cout << "Sum from Base class: " << result << endl;
        return a + b + c;
    }
};

int main() {
    Base *b;
    Derived d;
    b = &d;
    cout << "Sum from Derived class: " << b->sum(1, 2, 3) << endl;
    return 0;
}
