#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,x,y;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>x>>y;
        int sum=0;
        if(x>y){
            for(j=y+1;j<x;j++){
                if(j%2!=0){
                    sum=sum+j;
                }
            }
            cout<<sum<<endl;
        }
        else{
        for(j=x+1;j<y;j++){
            if(j%2!=0){
                sum=sum+j;
            }
        }
        cout<<sum<<endl;
    }
    }
    return 0;
}
