#include<iostream>
using namespace std;
int main()
{    
    bool x=true;
    int z=5;
    if(z<10){
        cout<<"true\n";
        if(x){
            cout<<"i am nested if\n";

        }else{
            cout<<"i am nested else\n";

        }
    }else{
        cout<<"false\n";
    }
return 0;
}