#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> numbers(n);
    
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    int max_num = *max_element(numbers.begin(), numbers.end());
    int min_num = *min_element(numbers.begin(), numbers.end());
    
    cout << max_num << " " << min_num << endl;
    
    return 0;
}
