#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double num = 123.456789;
    cout <<fixed << setprecision(2) << num << "\n";
    return 0;
}
