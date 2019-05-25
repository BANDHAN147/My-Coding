#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
    double x,y,p;
    cin>>x>>y;
    if(x==1){
        p=y*4.00;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<p<<endl;
    }
    else if(x==2){
        p=y*4.50;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<p<<endl;
    }
    else if (x==3){
        p=y*5.00;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<p<<endl;
    }
    else if(x==4){
        p=y*2.00;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<p<<endl;
    }
    else{
        p=y*1.50;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<p<<endl;
    }
    return 0;
}
