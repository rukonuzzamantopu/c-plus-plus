#include <iostream>
using namespace std;

int main() {
    long long x;
    int n;
    cin >> n;
    
    long long min = 1000000000000000000, max = -1;

    for (int i = 0; i < n; i++) {
        cin >> x;
        
        if(x < min) {
            min = x;
        }
        if(x > max) {
            max = x;
        }
    }
    
    cout << max << " " << min << endl;

    return 0;
}