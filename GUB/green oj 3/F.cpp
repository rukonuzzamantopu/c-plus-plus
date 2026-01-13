#include <bits/stdc++.h>
using namespace std;

long long digit(long long n) {
    if (n==0) return 0;
    return 1 + (n-1)%9;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        long long n;
        cin>>n;
        cout <<digit(n)<<endl;
        return 0;
}