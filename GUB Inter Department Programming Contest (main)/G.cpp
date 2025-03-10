#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double a,b,h,G;
    cin >>a>>b>>h>>G;
    double base = (b - a)/2.0;
    double non = sqrt((base * base) + (h * h));
    cout << fixed << setprecision(6) << non <<"\n";

    return 0;
}
