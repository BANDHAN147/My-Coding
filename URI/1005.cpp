#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float A,B,m;
    cin>>A>>B;
    m=(A*3.5+B*7.5)/(7.5+3.5);
    cout<<fixed<<setprecision(5)<<"MEDIA = "<<m<<endl;
    return 0;
}
