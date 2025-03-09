#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s, d;
    cin >> n >> s >> d;
    for (int i = 1; i <= n; i++) {
        int price;
        cin >> price;
        if (s >= price) {
            cout << i << '\n';
            return 0;
        }
        s += d;
    }
    cout << "-1\n";
    return 0;
}
