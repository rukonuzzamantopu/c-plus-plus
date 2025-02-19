#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<long long> a(n), b(m);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        for (int j = 0; j < m; j++) {
            cin >> b[j];
        }
        
        sort(b.begin(), b.end());

        const long long INF = 1LL << 60;
        long long curr = -(1LL << 60);
        bool possible = true;

        for (int i = 0; i < n; i++) {
            long long cand1 = INF;
            if (a[i] >= curr) 
                cand1 = a[i];

            long long target = curr + a[i];
            long long cand2 = INF;
            auto it = lower_bound(b.begin(), b.end(), target);
            
            if (it != b.end()) {
                cand2 = (*it) - a[i];
            }

            long long chosen = min(cand1, cand2);
            if (chosen == INF) {
                possible = false;
                break;
            }
            curr = chosen;
        }

        cout << (possible ? "YES" : "NO") << "\n";
    }

    return 0;
}
