#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,pi,d,e,f,g,h;
    pi=3.14159;
    cin>>a>>b>>c;
    d=(1.00/2.00)*a*c;
    e=pi*pow(c,2);
    f=(1.00/2.00)*(a+b)*c;
    g=pow(b,2);
    h=a*b;
    cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<d<<endl<<"CIRCULO: "<<e<<endl<<"TRAPEZIO: "<<f<<endl<<"QUADRADO: "<<g<<endl<<"RETANGULO: "<<h<<endl;
    return 0;
}
