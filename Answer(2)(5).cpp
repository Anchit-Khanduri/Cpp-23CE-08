#include <iostream>
using namespace std;

class A;
class B;
class C;

void displayPrivateData(A &a, B &b, C &c);

class A {
    int dataA;
    friend void displayPrivateData(A&, B&, C&);
public:
    A(int a) : dataA(a) {}
};

class B {
    int dataB;
    friend void displayPrivateData(A&, B&, C&);
public:
    B(int b) : dataB(b) {}
};

class C {
    int dataC;
    friend void displayPrivateData(A&, B&, C&);
public:
    C(int c) : dataC(c) {}
};

void displayPrivateData(A &a, B &b, C &c) {
    cout << "Data in A: " << a.dataA << endl;
    cout << "Data in B: " << b.dataB << endl;
    cout << "Data in C: " << c.dataC << endl;
}

int main() {
    A a(10);
    B b(20);
    C c(30);
    displayPrivateData(a, b, c);
    return 0;
}
