#include <bits/stdc++.h>
using namespace std;


int main()
{
    double i,j,k;
    for(i=0,j=1;i<=2;i+=0.2,j+=0.2){
        for(k=j;k<=(j+2);++k){
            cout<<"I="<<i<<" J="<<k<<endl;
        }
    }
    return 0;
}


/**
int main()
{
    int k = 0;
    for(int i = 0; i<2; i+=.2){

        for(int j =0; ;j+=.2){
            cout<<"i: "<<i<<" j: "<<(++k)+j<<endl;;
        }
        cout<<endl;
    }

    return 0;
}
**/

