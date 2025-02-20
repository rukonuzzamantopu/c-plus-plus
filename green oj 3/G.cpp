#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string revers;
    cin >> revers;
    for (int i = revers.length() - 1; i >= 0; i--) {
        cout << revers[i];
    }
    cout << endl;
return 0;
}