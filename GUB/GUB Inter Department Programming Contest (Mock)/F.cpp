#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int A, B;
        cin >> A >> B;
        if (A > B) {
            cout << "A is larger\n";
        } else if (B > A) {
            cout << "B is larger\n";
        } else {
            cout << "Both are equal\n";
        }
    }
    return 0;
}
