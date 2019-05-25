#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
    float n,a,i,c=0,r=0,s=0,sum=0;
    float pc,pr,ps;
    char d;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>d;
        sum=sum+a;
        if(d=='C'){
            c=c+a;
        }
        else if(d=='R'){
            r=r+a;
        }
        else if(d=='S'){
            s=s+a;
        }
    }
    pc=(c/sum)*100;
    pr=(r/sum)*100;
    ps=(s/sum)*100;
    cout<<"Total: "<<sum<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<pc<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<pr<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<ps<<" %"<<endl;
    return 0;
}
