#include <iostream>
using namespace std;

class Array{
private:
    int* arr;
    int size;

public:
    
    Array(int* inputArr, int s) {
        size = s;
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = inputArr[i];
        }
    }

    // Copy Constructor
    Array(const Array& other) {
        size = other.size;
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = other.arr[i];
        }
    }

    
    int sumNum() const {
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            if (arr[i] > 0) {
                sum += arr[i];
            }
        }
        return sum;
    }

    
};

int main() {
    int inputArr[] = {1, -2, 3, 4, -5, 6};
    int size = sizeof(inputArr) / sizeof(inputArr[0]);

    
    Array originalArray(inputArr, size);


    Array copiedArray = originalArray;


    int positiveSum = copiedArray.sumNum();
    cout << "Sum of all positive numbers: " << positiveSum << endl;

    return 0;
}
