#include <bits/stdc++.h>
using namespace std;

const int Max = 200005; 
int x[Max];
long long pre[Max];  
int main() {
    int n,q;
    cin>>n>>q;
    for (int i=1;i<=n;++i) {
        cin>> x[i];
    }
    pre[0] = 0;
    for (int i = 1; i <= n; ++i) {
        pre[i] = pre[i - 1] + x[i];
    }
    for (int i = 0; i < q; ++i) {
        int a, b;
        cin >> a >> b;
        cout<<pre[b] - pre[a - 1] << '\n';
    }
    return 0;
}
