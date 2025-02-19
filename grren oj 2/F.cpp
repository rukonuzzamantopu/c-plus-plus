#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int d = 1;
    A = A % 10;
    for (int i = 0; i < B; i++) {
        d = (d* A) % 10;
    }
    cout << d << endl;
    return 0;
}
