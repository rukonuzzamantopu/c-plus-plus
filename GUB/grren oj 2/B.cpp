#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int num, s, l;
    cin >> num;
    s = l = num;
    for (int i = 1; i < n; i++) {
        cin >> num;
        if (num < s) s = num;
        if (num > l) l = num;
    }
    cout << s << " " << l << "\n";
    return 0;
}
