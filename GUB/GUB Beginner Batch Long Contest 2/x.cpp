#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x, y, z;
    while (cin >> x >> y >> z) {
        double t = x + y + z;
        cout << fixed << setprecision(4) << t << endl;
    }
    return 0;
}
