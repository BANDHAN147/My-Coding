#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ds,hs,ms,ss,df,hf,mf,sf,starting,ending,t,d,h,m,s;
    cin>>ds>>hs>>ms>>ss>>df>>hf>>mf>>sf;
    ending=df*86400+hf*3600+mf*60+sf;
    starting=ds*86400+hs*3600+ms*60+ss;
    t=ending-starting;
    d=(t/86400);
    h=(t%86400)/3600;
    m=((t%86400)%3600)/60;
    s=((t%86400)%3600)%60;
    cout<<d<<" dia(s)"<<endl<<h<<" hora(s"<<endl<<m<<"  minuto(s"<<endl<<s<<" segundo(s"<<endl;
    return 0;
}
