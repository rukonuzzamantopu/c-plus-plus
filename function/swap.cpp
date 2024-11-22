#include <iostream>
using namespace std;

void fun(int &x,int &y)
{
int z=x;
x=y;
y=x;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout <<a<<" " <<b<<"\n";
    
}