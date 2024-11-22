#include<iostream>
using namespace std;
int main(){
    int a [10];
    for (int i=0;i<10;i++)
    cin>>a[i];
    int sum =1;
    for(int i=0;i<10;i++)
    sum=sum*a[i];

    cout<<sum<<"\n";
}
