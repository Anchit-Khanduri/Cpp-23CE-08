#include <iostream>
using namespace std;

class Sum {
public:

    // Constructor for integers
    Sum(int a, int b) {
        cout << "Sum of integers: " << (a + b) << endl;
    }

    // Constructor for floats
    Sum(float a, float b) {
        cout << "Sum of floats: " << (a + b) << endl;
    }

    // Constructor for characters
    Sum(char a, char b) {
        cout << "Sum of characters: " << (a + b) << endl;
    }
};

int main() {
    // Create objects to invoke constructors
    Sum intSum(3, 5);          // Sum of integers
    Sum floatSum(2.5f, 3.5f);  // Sum of floats
    Sum charSum('A', 'B');      // Sum of characters

    return 0;
}
