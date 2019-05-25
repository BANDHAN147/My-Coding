#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
    int i,count=0;
    float a,sum=0.00;
    for(i=0;i<6;i++){
        cin>>a;
        if(a>0){
            count++;
            sum=sum+a;
        }
    }
    cout<<count<<" valores positivos"<<endl<<fixed<<setprecision(1)<<sum/count<<endl;
    return 0;
}
