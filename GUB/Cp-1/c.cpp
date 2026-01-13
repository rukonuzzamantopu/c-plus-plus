#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b;
    float c;

    cin >> a >> b;
    c = (float)(a - b) / 3 + b; 
    cout << fixed << setprecision(7) << c; 
    return 0;
}
