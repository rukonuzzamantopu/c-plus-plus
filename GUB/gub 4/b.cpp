#include<iostream>
using namespace std;
 int main(){
int seq[1000];
int num=1,count=0;

while(count<1000){
    if(num%3!=0&&num%10!=3){
        seq[count]=num;
        count++;
    }
    num++;
}
int t;
cin>>t;
while(t--){
    int k;
    cin>>k;
    cout<<seq[k-1]<<endl;

}
    return 0;
 }