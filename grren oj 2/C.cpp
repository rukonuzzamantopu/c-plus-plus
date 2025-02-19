#include <iostream>
using namespace std;

int main() {
    int D, C;
    cin >> D >> C;
    if (D == C) {
        cout << "Today is the Contest Day!" << endl;
    } else if (D > C) {
        cout << "Contest has ended!" << endl;
    } else {
        cout << (C - D) << endl;
    }

    return 0;
}
