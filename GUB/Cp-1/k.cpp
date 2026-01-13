#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int A, B;
    cin >> A >> B;

    if (A >= 1 && A <= 9 && B >= 1 && B <= 9) {
        cout << A * B <<"\n";
    } else {
        cout << -1 <<"\n";
    }

    return 0;
}
