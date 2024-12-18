#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int A[n];
    int B[n];

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for(int i = 0;i<n; i++){
        B[i] = A[i];
    }

    int s = 0, e = n - 1;
    while (s < e) {
        int temp = A[s];
        A[s] = A[e];
        A[e] = temp;
        s++;
        e--;
    }
    
    int flag = 0;

    for (int i = 0; i < n; i++) {
        if(A[i] != B[i]){
            flag = 1;
        }
    }
    if(flag == 0){
        cout<<"Yes";
    }
    if(flag == 1){
        cout<<"No";
    }

    return 0;
}