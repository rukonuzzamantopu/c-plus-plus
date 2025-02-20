#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int eventA[N], eventB[N];
    int sumA = 0, sumB = 0;
    for (int i = 0; i < N; i++) {
        cin >> eventA[i];
        sumA += eventA[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> eventB[i];
        sumB += eventB[i];
    }
    if (sumA > sumB) {
        cout << "Event A has more budget" << endl;
    } else if (sumB > sumA) {
        cout << "Event B has more budget" << endl;
    } else {
        cout << "Both events have equal budget" << endl;
    }
    return 0;
}
