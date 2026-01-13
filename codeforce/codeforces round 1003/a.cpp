#include <iostream>
using namespace std;

string conv(const string &singular) {
    return singular.substr(0, singular.size() - 2) + "i";
}
int main (){
    int t;
    cin>>t;
    while(t--){
        string w;
        cin>>w;
        cout<<conv(w)<<"\n";
    }
    return 0;
}