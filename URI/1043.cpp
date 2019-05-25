#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a+b>c&&b+c>a&&c+a>b){
        cout<<fixed<<setprecision(1)<<"Perimetro = "<<a+b+c<<endl;
    }
    else{
        cout<<fixed<<setprecision(1)<<"Area = "<<((a+b)/2)*c<<endl;
    }
    return 0;
}
