#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int A[t];
    for (int i = 0; i < t; i++) {
        cin >> A[i];
    }
    for (int i = t - 1; i >= 0; i--) {
        cout << A[i] << " ";
    }
    cout << endl; 

    return 0;
}