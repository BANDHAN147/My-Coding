#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float h,p,s,t;
    cin>>h>>p>>s;
    t=p*s;
    cout<<"NUMBER = "<<h<<endl;
    cout<<fixed<<setprecision(2)<<"SALARY = U$ "<<t<<endl;
    return 0;
}
