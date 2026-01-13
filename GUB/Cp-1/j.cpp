#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b,r;
    cin>>n>>a>>b;
    r = n*a;
    if(r<b){
        cout<<r;
    }
    else{
        cout<<b;
    }
    return 0;
}