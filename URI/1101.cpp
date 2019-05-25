#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,sum=0;
    cin>>m>>n;
    if(m<=0||n<=0){
        return 0;
    }
    else if(m>n){
        for(i=n;i<=m;i++){
            cout<<i<<" ";
            sum=sum+i;
        }
        cout<<"Sum="<<sum<<endl;
    }
      else {
        for(i=m;i<=n;i++){
            cout<<i<<" ";
            sum=sum+i;
        }
        cout<<"Sum="<<sum<<endl;
    }
    return 0;
}
