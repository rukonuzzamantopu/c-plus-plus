#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
string s;
cin>>s;
if (s == "idpc") {
    cout << "27 February 2025\n";
    cout << "28 February 2025\n";
}else if(s=="idmo"){
    cout<<"28 February 2025"<<"\n";
}
else{
    cout<<"\n";
}
return 0;
}