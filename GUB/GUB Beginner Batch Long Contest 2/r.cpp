#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N <1 || N > 99) {
        return 0;  
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j || j == N - i - 1) {
                cout << "* ";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
