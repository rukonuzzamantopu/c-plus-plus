#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 int n,x;
    cin >> n;
    int positive = 0, negative = 0;
    for(int i =0; i<n; i++){
        cin >> x;
        if(x>0){
            positive++;
        }
        else if(x==0)
        {

        }
        else{
            negative++;
        }
    }
    
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;


    return 0;
}