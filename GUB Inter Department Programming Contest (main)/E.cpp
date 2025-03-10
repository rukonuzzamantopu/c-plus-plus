#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long N;
        int P;
        cin >> N >> P;
        long long result = pow(N, P);
        cout<<result<<"\n";
        // cout << (result % 2 == 0 ? "Even" : "Odd") << endl;
        if(result % 2 == 0){
            cout<<"Even"<<"\n";
        }else{
            cout<<"odd"<<"\n";
        }
    }

    return 0;
}
