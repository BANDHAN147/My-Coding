#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string h;
    double p,s,t;
    cin>>h>>p>>s;
    t=p+s*.15;
    cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<t<<endl;
    return 0;
}


