#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, P;
        cin >> N >> P;

        if (N % 2 == 0) {
            cout << "Even" << endl;
        } else {
            cout << "Odd" << endl;
        }
    }

    return 0;
}
