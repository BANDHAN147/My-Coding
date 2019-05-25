#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
    double a;
    cin>>a;
    if(a<=400){
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<a+a*.15<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<a*.15<<endl;
        cout<<"Em percentual: 15 %"<<endl;
    }
    else if(a>=400.01&&a<=800.00){
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<a+a*.12<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<a*.12<<endl;
        cout<<"Em percentual: 12 %"<<endl;
    }
    else if(a>=800.01&&a<=1200.00){
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<a+a*.10<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<a*.10<<endl;
        cout<<"Em percentual: 10 %"<<endl;
    }
    else if(a>=1200.01&&a<=2000.00){
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<a+a*.07<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<a*.07<<endl;
        cout<<"Em percentual: 7 %"<<endl;
    }
    else if(a>2000.00){
         cout<<fixed<<setprecision(2)<<"Novo salario: "<<a+a*.04<<endl;
         cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<a*.04<<endl;
         cout<<"Em percentual: 4 %"<<endl;
    }
    return 0;
}
