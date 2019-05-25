#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
 double media(){
    double a,c=0,d=0;
    while(true){
        if(d==2){
            break;
        }
        cin>>a;
        if(a>=0 && a<=10){
            d++;
            c+=a;
        }
    else{
        cout<<"nota invalida"<<endl;
    }
    }
    cout<<setprecision(2)<<"media = "<<c/2<<endl;
    cout<<"novo calculo (1-sim 2-nao)"<<endl;
    }
int main()
{
    media();
    int x;
    while(1){
        cin>>x;
        if(x<1||x>2){
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
        }
        else if(x==1){
            media();
        }
        else if(x==2){
            break;
        }
    }

    return 0;
}

