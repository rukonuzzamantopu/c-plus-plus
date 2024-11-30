#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ar[100];
    int i = 0;
    int temp = n;

    // Extract digits of n and store in array
    while (temp > 0) {
        ar[i] = temp % 10;
        temp /= 10;
        i++;
    }

    // Check if the number is a lucky number
    int count = 0;
    for (int j = 0; j < i; j++) {
        if (ar[j] == 4 || ar[j] == 7) {
            count++;
        }
    }

    // If all digits are 4 or 7, it's a lucky number
    if (count == i) {
        cout << "YES" << endl;
        return 0;
    }

    // Check if the number is almost lucky
    bool isAlmostLucky = false;
    for (int k = 1; k <= n; k++) {
        // Check if k is a lucky number
        int tempK = k;
        bool isLucky = true;
        while (tempK > 0) {
            int digit = tempK % 10;
            if (digit != 4 && digit != 7) {
                isLucky = false;
                break;
            }
            tempK /= 10;
        }

        // If k is lucky and divides n, it's almost lucky
        if (isLucky && n % k == 0) {
            isAlmostLucky = true;
            break;
        }
    }

    if (isAlmostLucky) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}