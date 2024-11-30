#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    for (int num = 100; num <= 999; num++) {
        int hundreds = num / 100;
        int tens = (num / 10) % 10;
        int ones = num % 10;
        
        if (hundreds + tens + ones == n) {
            count++;
            cout << num << endl;
        }
    }
    
    cout << count << endl;

    return 0;
}
