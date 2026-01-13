#include <iostream>
using namespace std;

// Function to calculate the sum of digits of a number
int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10; // Add the last digit
        n /= 10;       // Remove the last digit
    }
    return sum;
}

int main() {
    int a;
    cin >> a;

    while (true) {
        if (sum_of_digits(a) % 4 == 0) {
            cout << a << endl;
            break;
        }
        a++; // Check the next number
    }

    return 0;
}