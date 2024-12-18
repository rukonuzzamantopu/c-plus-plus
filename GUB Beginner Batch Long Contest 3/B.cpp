
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    int topu = 0;

    for (int i = 0; i < n - 1; i++) {
        if (A[i] > A[i + 1]) {
            topu = 1;
            break;
        }
    }

    if (topu == 0) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
    }

    return 0;
}
