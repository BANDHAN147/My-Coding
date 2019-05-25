#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a,i;
    float b,c,s=0.0;
    for(i=0;i<2;i++)
    {
        cin>>a>>b>>c;
        s=s+b*c;
    }
    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<s<<endl;
    return 0;
}

