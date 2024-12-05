#include <iostream>
using namespace std;

int main() {
    int n, height, maxHeight = 0, minHeight = 101;
    cin >> n;

    // Read the heights and find max and min in one loop
    for (int i = 0; i < n; i++) {
        cin >> height;
        if (height > maxHeight) maxHeight = height;
        if (height < minHeight) minHeight = height;
    }

    // Calculate and print the wind strength
    cout << (maxHeight - minHeight) << endl;

    return 0;
}
