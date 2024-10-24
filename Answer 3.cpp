#include <iostream>
using namespace std;


class Base {
protected:
    int num1; 
    int num2; 


    Base(int a, int b) : num1(a), num2(b) {}
};

class Derived : public Base {
public:
    
    Derived(int a, int b) : Base(a, b) {}

    // Function to calculate and display the sum
    void displaySum() {
        int sum = num1 + num2;
        cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    }
};

int main() {

    Derived obj(10, 20);
    obj.displaySum(); 

    return 0;
}
