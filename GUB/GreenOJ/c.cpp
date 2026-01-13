#include <iostream>
using namespace std;
int MissNum(int n, int arr[]) {
    long long total = (long long)n * (n + 1) / 2;
    long long given = 0;
    for (int i = 0; i < n - 1; i++) {
        given += arr[i];
    }
    return total - given;
}
int main() {
    int n;
    cin >> n;
    int arr[n - 1];
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }
    cout << MissNum(n, arr) <<"\n";
    return 0;
}
