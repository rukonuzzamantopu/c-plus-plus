#include <iostream>
using namespace std;

int main() {
    int e,f,c;
    cin >> e;
    cin >> f;
    cin >> c;
    
    int count =0;
    int sum = e+f;
    while(sum>1){
        sum = sum - c;
        sum++;
        count++;
    }
    cout << count << endl;
    return 0;
}