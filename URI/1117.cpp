#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,c=0,d=0;
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
    cout<<"media = "<<c/2<<endl;
    return 0;
}
