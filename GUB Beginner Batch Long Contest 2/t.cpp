#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    
    vector<int> sequence(n);
    for (int i = 0; i < n; i++) {
        sequence[i] = i + 1;
    }
    
    reverse(sequence.begin() + a - 1, sequence.begin() + b);
    reverse(sequence.begin() + c - 1, sequence.begin() + d);
    
    for (int i = 0; i < n; i++) {
        cout << sequence[i] << " ";
    }
    cout << endl;
    
    return 0;
}
