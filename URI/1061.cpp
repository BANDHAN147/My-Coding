#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,a,b,c,e,d,f,g,day,hour,min,sec;
    cin>>s>>a>>b>>c;
    cout<<endl;
    cin>>e>>d>>f>>g;
    day=e-s;
    if(d<a){
        day=day-1;
        hour=24-a+d;
        if(b>f){
            min=60-(b-f);
            if(c<g){
                sec=g-c;
            }
            else if(c>g){
                sec=60-(c-g);
            }
            else{
                sec=0;
            }
        }
        else if(b<f){
            min=f-b;
            if(c<g){
                sec=g-c;
            }
            else if(c>g){
                sec=60-(c-g);
            }
            else{
                sec=0;
            }
        }
        else{
            min=0;
            if(c<g){
                sec=g-c;
            }
            else if(c>g){
                sec=60-(c-g);
            }
            else{
                sec=0;
            }
        }
    }
    else if(d>a){
        hour=d-a;
        if(b>f){
            min=60-(b-f);
            if(c<g){
                sec=g-c;
            }
            else if(c>g){
                sec=60-(c-g);
            }
            else{
                sec=0;
            }
        }
        else if(b<f){
            min=f-b;
            if(c<g){
                sec=g-c;
            }
            else if(c>g){
                sec=60-(c-g);
            }
            else{
                sec=0;
            }
        }
        else{
            min=0;
            if(c<g){
                sec=g-c;
            }
            else if(c>g){
                sec=60-(c-g);
            }
            else{
                sec=0;
            }
        }
    }
    else{
        hour=0;
        if(b>f){
            min=60-(b-f);
            if(c<g){
                sec=g-c;
            }
            else if(c>g){
                sec=60-(c-g);
            }
            else{
                sec=0;
            }
        }
        else if(b<f){
            min=f-b;
            if(c<g){
                sec=g-c;
            }
            else if(c>g){
                sec=60-(c-g);
            }
            else{
                sec=0;
            }
        }
        else{
            min=0;
            if(c<g){
                sec=g-c;
            }
            else if(c>g){
                sec=60-(c-g);
            }
            else{
                sec=0;
            }
        }
    }
    cout<<day<<" dia(s)"<<endl<<hour<<" hora(s)"<<endl<<min<<" minuto(s)"<<endl<<sec<<" segundo(s)"<<endl;
    return 0;
}
