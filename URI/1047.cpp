#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,h,m;
    cin>>a>>c>>b>>d;
    if(a>b){
        h=(24-a)+b;
        if(c<d){
            m=d-c;
        }
        else if(c>d){
            h=h-1;
            m=(60-c)+d;
        }
    }
    else if(a<b){
        h=b-a;
        m=(60-c)+d;
        if(c<d){
            m=d-c;
        }
        else if(c>d){
            h=h-1;
            m=(60-c)+d;
        }
    }
    else if(a==b){
        h=24;
        if(c<d){
            m=d-c;
        }
        else if(c>d){
            h=h-1;
            m=(60-c)+d;
        }
        else if(c==d){
            m=0;
        }
    }
    cout<<"O JOGO DUROU "<<h<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl;
    return 0;
}
