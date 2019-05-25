#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,c,d,r1,r2;
    cin>>a>>b>>c;
    d=b*b-4*c*a;
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    if(d<0 || a==0){
        cout<<"Impossivel calcular"<<endl;
    }
    else{
        cout<<fixed<<setprecision(5)<<"R1 = "<<r1<<endl<<"R2 = "<<r2<<endl;
    }
    return 0;
}
