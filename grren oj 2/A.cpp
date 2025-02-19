#include <iostream>
using namespace std;

int counts(const string& n) {
    int count = 0;
    for (char digit : n) {
        if (digit == '2')
            count++;
    }
    return count;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
int t;
cin>>t;
while(t--){
    string n;
    cin>>n;
    cout<< counts(n)<<"\n";
}
return 0;
}