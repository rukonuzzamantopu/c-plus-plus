#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int Even = -1;
    for (int i = 0; i < N; i++) {
        int roll;
        cin >> roll;
        if (roll % 2 == 0) {
            if (roll > Even) {
                Even = roll;
            }
        }
    }
    if (Even == -1) {
        cout << "No even number found" << endl;
    } else {
        cout << Even << endl;
    }
    return 0;
}
