#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,count=0;
    for(i=0;i<5;i++){
        cin>>a;
        if(a%2==0){
            count++;
        }
    }
    cout<<count<<" valores pares"<<endl;
    return 0;
}
