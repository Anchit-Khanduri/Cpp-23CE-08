#include <iostream>
using namespace std;

class Sum {
public:
    int add(int a, int b) {
        return a + b;
    }
    
    int add(int a, int b, int c) {
        return a + b + c;
    }

    int add(int a, int b, int c, int d) {
        return a + b + c + d;
    }
};

int main() {
    Sum s;
    cout << "Sum of 2 numbers: " << s.add(1, 2) << endl;
    cout << "Sum of 3 numbers: " << s.add(1, 2, 3) << endl;
    cout << "Sum of 4 numbers: " << s.add(1, 2, 3, 4) << endl;
    return 0;
}
