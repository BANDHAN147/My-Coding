#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    for(i=1,j=7;i<=9 &&j<=15;i+=2,j+=2){
        for(k=j;k>=j-2;k--){
            cout<<"I="<<i<<" J="<<k<<endl;
        }
    }
    return 0;
}

