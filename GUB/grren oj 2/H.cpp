#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            cout << "First Prize" << endl;
        } else if (i == 2) {
            cout << "Second Prize" << endl;
        } else if (i == 3) {
            cout << "Third Prize" << endl;
        } else if (i >= 4 && i <= 10) {
            cout << "Might Get Prize, Surprize!" << endl;
        } else {
            cout << "Participation Prize" << endl;
        }
    }

    return 0;
}
