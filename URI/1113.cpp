#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    while(true){
        cin>>m>>n;
        if(m==n){
            break;
        }
        else if(m>n){
            cout<<"Decrescente"<<endl;
        }
        else{
            cout<<"Crescente"<<endl;
        }
    }
    return 0;
}
