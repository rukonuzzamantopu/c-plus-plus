#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 int n;
 cin>>n;
 int scr[n],total=0;
 for(int i=0;i<n;i++){
    cin>>scr[i];
    total+=scr[i];
 }
 int avr=round((double)total/n);
 cout<<total<<'\n'<<avr<<"\n";
    return 0;
}