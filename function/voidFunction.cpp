#include <iostream>
using namespace std;

void fun(string &s)
{
    s.erase(s.begin());
    s.pop_back();
    cout <<s<<"\n";
}
int main()
{
    string s;
    cin>>s;
    fun(s);
    cout <<s<<"\n";
    
}