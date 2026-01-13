#include <bits/stdc++.h>
#include <cctype>

#define arrayInput                  \
    long long int n;                 \
    cin >> n;                        \
    long long int a[n];               \
    for (int i = 0; i < n; i++)       \
        cin >> a[i];

#define test   \
    int t;     \
    cin >> t;  \
    while (t--)

#define loop0 for (long long int i = 0; i < n; i++)
#define loop1 for (long long int i = 1; i < n; i++)
#define cloop(a, n) for (int i = a; i < n; i++)
#define dloop(a, n) for (int i = a; i > n; i--)
#define print(a) cout << a << "\n";
#define dprint(a, b) cout << a << " " << b << endl;
#define nd &&
#define rr ||
#define ek ==
#define nek !=
#define ll long long
#define lli long long int
#define asort(a, n) sort(a, a + n);
#define dsort(a, n) sort(a, a + n, greater<int>())
#define yesPrint cout << "YES" << endl;
#define noPrint cout << "NO" << endl;
#define fast                       \
    ios_base::sync_with_stdio(0);   \
    cin.tie(NULL);                  \
    cout.tie(NULL)

using namespace std;

int gcd(int a, int b) {
    while (true) {
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}

int lcm(int a, int b) {
    int temp = gcd(a, b);
    return temp ? (a / temp * b) : 0;
}

int main() {
    fast;
    
    string a;
    cin >> a;

    int rep = 1, maxRep = 1;
    
    cloop(1, a.size()) {
        if (a[i] == a[i - 1]) 
            rep++;
        else {
            if (rep > maxRep) 
                maxRep = rep;
            rep = 1;
        }
    }

    if (rep > maxRep) 
        maxRep = rep;

    print(maxRep)

    return 0;
}
