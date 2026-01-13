#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int seen[max + 1] = {0};
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (seen[arr[i]] == 0) {
            seen[arr[i]] = 1;
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
