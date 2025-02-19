#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;
    int tS = 0;
    for (int i = 0; i < N; i++) {
        int s;
        cin >> s;
        tS += s;
    }
    int av = round((double)tS / N);
    cout << tS << endl;
    cout << av << endl;

    return 0;
}
