#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long s[10], a[10]; 
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    a[0] = s[0];
    for (int i = 1;i< n; ++i) {
        a[i] = s[i] - s[i - 1]; 
    }
    for (int i = 0; i < n; ++i) {
        cout << a[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
