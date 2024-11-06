#include <iostream>
using namespace std;

class NumberChecker {
    int number;
public:
    NumberChecker(int n) : number(n) {}

    friend class PrimeChecker;
};

class PrimeChecker {
public:
    bool isPrime(NumberChecker n) {
        if (n.number <= 1) return false;
        for (int i = 2; i < n.number; i++) {
            if (n.number % i == 0) return false;
        }
        return true;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    NumberChecker n(num);
    PrimeChecker p;
    if (p.isPrime(n))
        cout << "The number is prime." << endl;
    else
        cout << "The number is not prime." << endl;
    return 0;
}
