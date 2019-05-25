#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,x,min,max,y,sum=0;
    cin>>x>>y;
    if(x>y){
        min=y;
        max=x;
    }
    else if(x<y){
        min=x;
        max=y;
        }
    for(i=min;i<=max;i++){
        if(i%13!=0){
            sum=sum+i;
        }
    }
    cout<<sum;
    return 0;
}
