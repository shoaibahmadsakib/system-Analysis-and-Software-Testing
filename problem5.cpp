//5 no problem
#include <iostream>

using namespace std;

// Function to calculate factorial using while loop
unsigned long long factorialWhileLoop(int num) {
    unsigned long long result = 1;
    while (num > 1) {
        result *= num;
        num--;
    }
    return result;
}

// Function to calculate factorial using for loop
unsigned long long factorialForLoop(int num) {
    unsigned long long result = 1;
    for (int i = 2; i <= num; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Error: The number must be positive.\n";
        return 1;
    }

    // Calculate factorial using while loop
    unsigned long long factorialWhile = factorialWhileLoop(number);
    cout << "Factorial using while loop: " << factorialWhile << endl;

    // Calculate factorial using for loop
    unsigned long long factorialFor = factorialForLoop(number);
    cout << "Factorial using for loop: " << factorialFor << endl;

    // Verify the results
    if (factorialWhile == factorialFor) {
        cout << "Both results are the same. Verification successful.\n";
    } else {
        cout << "Results are different. Verification failed.\n";
    }

    return 0;
}
