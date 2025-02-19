#include <iostream>
using namespace std;

// Function to calculate factorial
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int t, n;
    cout << "Enter the number of test cases: ";
    cin >> t;
    
    while (t--) {
        cout << "Enter a number: ";
        cin >> n;
        
        if (n < 0)
            cout << "Factorial is not defined for negative numbers." << endl;
        else
            cout << "Factorial of " << n << " is " << factorial(n) << endl;
    }
    
    return 0;
}
