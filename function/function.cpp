#include <iostream>
using namespace std;

string fun(string s)
{
    s.erase(s.begin());
    s.pop_back();
    return s;
}
int main()
{
    string s;
    cin>>s;
    string ans=fun(s);
    cout <<s<<"\n";
    cout <<ans<<"\n";
    
}