#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 0) {
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }

    cout << maxIndex << "\n";

    return 0;
}
