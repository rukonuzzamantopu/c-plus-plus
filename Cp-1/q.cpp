#include<iostream>
using namespace std;
int main() {
    int p1, p2, p3, p4;

    cin >> p1 >> p2 >> p3 >> p4;
    int count = 0;

    if (p1 >= 10) {
        count +=1;
    }
    if (p2 >= 10) { 
        count+=1;
    }
    if (p3 >= 10) {
        count+=1;
    }
    if (p4 >= 10) {
        count+=1;
    }

    cout << count; 
    return 0;
}