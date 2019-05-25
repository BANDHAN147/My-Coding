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
    for(i=min+1;i<max;i++){
        if(i%5==2 || i%5==3){
            cout<<i<<endl;
        }
    }
    return 0;
}
