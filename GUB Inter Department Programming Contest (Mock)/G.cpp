#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    double A, B, C;
    cin >> A >> B >> C;
    double Num = (A + B + C) / 3.0;
    cout << fixed << setprecision(4) << Num << '\n';
    return 0;
}
