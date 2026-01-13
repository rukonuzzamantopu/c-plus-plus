#include <iostream>
using namespace std;

int main() {
    int r;
    cin >> r;
    int count = 0;
    for (int x = -r; x <= r; x++) {
        for (int y = -r; y <= r; y++) {
            if (x * x + y * y <= r * r) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
