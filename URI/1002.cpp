#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double R,A,p=3.14159;
    cin>>R;
    A=p*R*R;
    cout<<fixed<<setprecision(4)<<"A="<<A<<endl;
    return 0;
}
