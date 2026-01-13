#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long move=0;
    int pre,cur;
    for(int i=1;i<n;i++){
        cin>>cur;
        if(cur<pre){
            move +=pre-cur;

        }else{
            pre=cur;
        }
    }
    cout<<move<<"\n";
    return 0;

}