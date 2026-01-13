#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;
    int even = 0;
    int odd=0;

    for (int i = 0; i < N; i++) {
        int s;
        cin >> s;
        if(s % 2 == 0){
            even +=s;
            
        }else{
            odd +=s;
            
        }
    }
    cout << even<<" "<< odd << endl;
    return 0;
}
