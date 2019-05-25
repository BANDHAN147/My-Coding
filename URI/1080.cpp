#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,high=0,pos;
    for(i=1;i<=100;i++){
        cin>>n;
        if(n>high){
            high=n;
            pos=i;
        }
    }
    cout<<high<<endl<<pos<<endl;
    return 0;
}
