#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a[1000],i,n;
   cin>>n;
   for(i=0;i<n;i++){
    cin>>a[i];
   }
   for(i=0;i<n;i++){
    if(a[i]==0){
        cout<<"NULL"<<endl;
    }
    else if(a[i]%2==0){
        if(a[i]>0){
            cout<<"EVEN POSITIVE"<<endl;
        }
        else{
            cout<<"EVEN NEGATIVE"<<endl;
        }
    }
    else{
        if(a[i]>0){
            cout<<"ODD POSITIVE"<<endl;
        }
        else{
            cout<<"ODD NEGATIVE"<<endl;
    }
   }
   }
    return 0;
}
