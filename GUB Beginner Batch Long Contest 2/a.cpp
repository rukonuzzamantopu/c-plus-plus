#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; 
    
    int totalCandies = 0;
    
    for (int i = 1; i <= N; i++) {
        totalCandies += i;
    }
    
    cout << totalCandies << endl;
    
    return 0;
}
