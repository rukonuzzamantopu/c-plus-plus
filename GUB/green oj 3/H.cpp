#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string S;
    cin >> S;    
    string result = "";
    for (char c : S) {
        if (!isVowel(c)) {
            result += c;
        }
    }
    if (result.empty()) {
        cout<< "No Consonant Found" <<"\n";
    } else {
        cout<<result<<"\n";
    }
return 0;
}