#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float A,B,C,m;
    cin>>A>>B>>C;
    m=(A*2+B*3+C*5)/(2+3+5);
    cout<<fixed<<setprecision(1)<<"MEDIA = "<<m<<endl;
    return 0;
}

