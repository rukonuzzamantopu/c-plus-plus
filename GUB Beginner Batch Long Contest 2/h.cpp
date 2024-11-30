#include <iostream>
using namespace std;

int main() {
    int P, Q, R;
    cin >> P >> Q >> R;

    int route1 = P + Q;
    int route2 = R + Q;
    int route3 = P + R;
    int route4 = Q + R;
    int route5 = R + P;
    int route6 = Q + P;

    int minTime = route1; 
    if (route2 < minTime) minTime = route2;
    if (route3 < minTime) minTime = route3;
    if (route4 < minTime) minTime = route4;
    if (route5 < minTime) minTime = route5;
    if (route6 < minTime) minTime = route6;


    cout << minTime << endl;

    return 0;
}
