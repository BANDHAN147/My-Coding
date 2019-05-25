#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,count=0;
    cin>>a;
    if(a%2!=0){
        for(i=a;count<6;i+=2){
            count++;
            cout<<i<<endl;
        }
    }
    else{
        for(i=a+1;count<6;i+=2){
            count++;
            cout<<i<<endl;
        }
    }
    return 0;
}
