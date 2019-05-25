#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,c=0,d=0,e=0,f=0;
    for(i=0;i<5;i++){
        cin>>a;
        if(a%2==0){
            c++;
            if(a>0){
              e++;
            }
        else if(a<0&&a!=0){
            f++;
        }
        }
        else{
            d++;
            if(a>0){
              e++;
            }
        else if(a<0&&a!=0){
            f++;
        }
        }
    }
    cout<<c<<" valor(es) par(es)"<<endl<<d<<" valor(es) impar(es)"<<endl<<e<<" valor(es) positivo(s)"<<endl<<f<<" valor(es) negativo(s)"<<endl;
    return 0;
}
