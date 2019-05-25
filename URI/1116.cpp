#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
    int i,n;
    double x,y;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x>>y;
        if(y==0){
            cout<<"divisao imposssivel"<<endl;
        }
        else{
        cout<<fixed<<setprecision(1)<<x/y<<endl;
        }
    }
    return 0;
}
