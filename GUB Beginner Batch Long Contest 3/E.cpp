#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 1 || n > 1000000) {
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < 1 || arr[i] > n) {
            return 0;
        }
    }

    int fre[n + 1] = {0};
    for (int i = 0; i < n; i++) {
        fre[arr[i]] += 1;
    }

    for (int i = 1; i <= n; i++) {
        cout << i << ": " << fre[i] << endl;
    }

    return 0;
}
