#include <bits/stdc++.h>
using namespace std;
int i=0,g=0,h=0;
void granius(){
        int a,b;
        cin>>a>>b;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        if(a>b){
            i++;
        }
        else if(a<b){
            g++;
        }
        else if(a==b){
            h++;
        }
    }
int main()
{
    int x;
    granius();
    while(1){
        cin>>x;
        if(x==1){
           granius();
        }
        else{
            cout<<i+g+h<<" grenais"<<endl;
            cout<<"Inter:"<<i<<endl;
            cout<<"Grenio:"<<g<<endl;
            cout<<"Empates:"<<h<<endl;
            if(i>g){
                cout<<"Inter vencue mais"<<endl;
            }
            else if(i<g){
                cout<<"Gremio vencue mais"<<endl;
            }
            else{
                cout<<"Nao houve vencedor"<<endl;
            }
            break;
        }
    }

    return 0;
}
