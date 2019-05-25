#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a;
    if(a>=0.00&&a<=2000.00){
        cout<<"Isento"<<endl;
    }
    else if(a>2000.00&&a<=3000.00){
        b=(a-2000.00)*.08;
        cout<<fixed<<setprecision(2)<<"R$ "<<b<<endl;
    }
    else if(a>3000.00&&a<=4500.00){
        c=(a-2000.00);
        b=1000.00*.08+(c-1000.00)*.18;
        cout<<fixed<<setprecision(2)<<"R$ "<<b<<endl;
    }
    else{
        c=(a-2000.00);
        b=1000.00*.08+1500.00*.18+(c-2500.00)*.28;
        cout<<fixed<<setprecision(2)<<"R$ "<<b<<endl;
    }
    return 0;
}
