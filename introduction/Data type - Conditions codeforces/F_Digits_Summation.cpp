#include <iostream>
using namespace std;

int main()
{
    long long N, M;
    cin >> N >> M;
    long long lastDigitN = N % 10;
    long long lastDigitM = M % 10;
    long long sum = lastDigitN + lastDigitM;
    cout << sum << endl;
    return 0;
}