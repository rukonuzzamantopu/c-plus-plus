#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        int bookshelves = (N + 4) / 5;
        
        cout << bookshelves << endl;
    }
    
    return 0;
}
