#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int solve() {
    string S;
    cin >> S;
    
    // Set of vowels, including Y as a vowel
    unordered_set<char> vowels = {'A', 'E', 'I', 'O', 'U', 'Y'};
    
    int count_vowels = 0, count_consonants = 0, count_ng = 0;
    
    int i = 0;
    int n = S.size();
    
    while (i < n) {
        if (vowels.count(S[i])) {
            count_vowels++;
            i++;
        } 
        else if (i + 1 < n && S[i] == 'N' && S[i + 1] == 'G') {
            count_consonants++;
            i += 2;
        } 
        else {
            count_consonants++;
            i++;
        }
    }
    
    int num_syllables = min(count_vowels, count_consonants / 2);
    
    return num_syllables * 3;
}

int main() {
    cout << solve() << endl;
    return 0;
}
