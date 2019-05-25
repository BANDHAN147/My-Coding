#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double r,pi,v;
    cin>>r;
    pi=3.14159;
    v=(4/3.00)*pi*pow(r,3);
    cout<<fixed<<setprecision(3)<<"VOLUME = "<<v<<endl;
    return 0;
}

