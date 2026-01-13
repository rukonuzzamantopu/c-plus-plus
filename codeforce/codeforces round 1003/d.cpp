#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct ArrayData {
    long long sum;
    long long score;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<ArrayData> arr(n);
        long long constantPart = 0;

        for (int i = 0; i < n; i++) {
            long long running = 0;
            long long score_i = 0;
            long long sum_i = 0;

            for (int j = 0; j < m; j++) {
                int x;
                cin >> x;
                sum_i += x;
                running += x;
                score_i += running;
            }

            arr[i].sum = sum_i;
            arr[i].score = score_i;
            constantPart += score_i;
        }

        sort(arr.begin(), arr.end(), [](const ArrayData &A, const ArrayData &B) {
            return A.sum > B.sum;
        });

        long long additional = 0;

        for (int r = 0; r < n; r++) {
            additional += (long long)(n - 1 - r) * arr[r].sum;
        }

        long long ans = constantPart + m * additional;
        cout << ans << "\n";
    }

    return 0;
}
