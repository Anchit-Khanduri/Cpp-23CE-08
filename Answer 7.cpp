#include <iostream>
using namespace std;

// Base class A
class A {
protected:
    int a;
public:
    A(int x) : a(x) {}
};

// Class B inherits from A
class B : public A {
public:
    B(int x) : A(x) {}

    void displayB() {
        cout << "Value in class B: " << a << endl;
    }
};

// Class C inherits from A
class C : public A {
public:
    C(int x) : A(x) {}

    void displayC() {
        cout << "Value in class C: " << a << endl;
    }
};

// Class D inherits from A
class D : public A {
public:
    D(int x) : A(x) {}

    void displayD() {
        cout << "Value in class D: " << a << endl;
    }
};

// Class E inherits from B
class E : public B {
public:
    E(int x) : B(x) {}

    void displayE() {
        cout << "Value in class E: " << a << endl;
    }
};

int main() {
    B objB(10);
    objB.displayB();

    C objC(20);
    objC.displayC();

    D objD(30);
    objD.displayD();

    E objE(40);
    objE.displayE();

    return 0;
}
