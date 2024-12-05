#include <iostream>
#include <string>
using namespace std;

int main() {
    int n,x,max=0,min=101;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x > max) max = x;
        if(x < min) min = x;
    }
    cout << (max - min) <<"\n";

    return 0;
}
