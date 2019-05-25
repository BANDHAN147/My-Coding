#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,r;
    cin>>a;
    b=a/100;
    r=a%100;
    c=r/50;
    r=r%50;
    d=r/20;
    r=r%20;
    e=r/10;
    r=r%10;
    f=r/5;
    r=r%5;
    g=r/2;
    r=r%2;
    h=r/1;
    cout<<a<<endl;
    cout<<b<<" nota(s) de R$ 100,00"<<endl;
    cout<<c<<" nota(s) de R$ 50,00"<<endl;
    cout<<d<<" nota(s) de R$ 20,00"<<endl;
    cout<<e<<" nota(s) de R$ 10,00"<<endl;
    cout<<f<<" nota(s) de R$ 5,00"<<endl;
    cout<<g<<" nota(s) de R$ 2,00"<<endl;
    cout<<h<<" nota(s) de R$ 50,00"<<endl;
    return 0;

}
