#include<iostream>
using namespace std;
int main(){
    int a,b,r;
    cin>>a>>b;
    r = a+b;
    if(r>= 10){
        cout<<"error";
    }
    else{
        cout<<r;
    }
    return 0;
}