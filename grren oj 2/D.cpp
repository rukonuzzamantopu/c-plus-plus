#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
string s;
cin>>s;
if(s=="Female"){
    cout<<"Eligible for Best Female Programmer!"<<"\n";
}else{
    cout<<"Not eligible."<<"\n";
}
return 0;
}