#include <iostream>
using namespace std;

class CheckPrime {
private:
    int number;
public:
    CheckPrime(int x) : number(x) {}

    // Friend class declaration
    friend class Prime;
};

class Prime {
public:
    void check(CheckPrime obj) {
        int n = obj.number;
        bool isPrime = true;
        
        if(n <= 1) isPrime = false;
        for(int i = 2; i <= n / 2; i++) {
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) {
            cout << n << " is a prime number." << endl;
        } else {
            cout << n << " is not a prime number." << endl;
        }
    }
};

int main() {
    CheckPrime obj(29);
    Prime primeChecker;
    primeChecker.check(obj);

    return 0;
}
