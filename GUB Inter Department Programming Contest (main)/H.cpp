#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> tem(n);
    int sum = 0;

    for (int i=0;i<n; ++i) {
        cin >> tem[i];
        sum += tem[i];
    }
    double aver = static_cast<double>(sum) / n;
    int days = 0;
    for (int i=0;i<n; ++i) {
        if (tem[i] > aver) {
            days++;
        }
    }
    cout <<days<<"\n";
    return 0;
}
