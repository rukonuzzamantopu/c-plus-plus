#include <iostream>
using namespace std;

int main() {
    int a, b, c, r1;
    cin>>a>>b>>c;

    if(a<b && a<c){
        if(b<c){
            r1 = a+b;
        }
        else {
            r1 = a+c;
        }
    }
    else if ( b<a && b<c){
        if(a<c){
            r1 = b+a;
        }
        else {
            r1 = b+c;
        }
    }
    
    else {
        if(a<b){
            r1 = c+a;
        }
        else {
            r1 = c+b;
        }
    }

    cout << r1;

    return 0;
}