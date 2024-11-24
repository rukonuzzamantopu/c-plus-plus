#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int A, B;
    cin >> A >> B;

    if (A % 3 == 0 || B % 3 == 0 || (A + B) % 3 == 0) {
        cout << "Possible" <<"\n";
    } else {
        cout << "Impossible" <<"\n";
    }

    return 0;
}
