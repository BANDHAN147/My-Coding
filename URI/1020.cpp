#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,y,m,d,r;
    cin>>a;
    y=a/365;
    r=a%365;
    m=r/30;
    d=r%30;
    cout<<y<<" ano(s)"<<endl<<m<<" mes(es)"<<endl<<d<<" dia(s)"<<endl;
    return 0;
}
