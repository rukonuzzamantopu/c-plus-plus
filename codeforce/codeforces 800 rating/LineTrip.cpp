#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        vector<long long> stations;
        stations.push_back(0);
        for (int i = 0; i < n; i++) {
            long long point;
            cin >> point;
            stations.push_back(point);
        }
        stations.push_back(x);
        n=stations.size();
        long long maxDis = LLONG_MIN;
        for (int i = 1; i < n; i++) {
            if(i==n-1)
            maxDis = max(maxDis,2* (stations[i] - stations[i - 1]));
            else
            maxDis = max(maxDis, stations[i] - stations[i - 1]);
        }
        cout << maxDis << endl;
    }
    return 0;
}
