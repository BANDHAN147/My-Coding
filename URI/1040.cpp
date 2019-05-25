#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
    double n1,n2,n3,n4,a,b;
    cin>>n1>>n2>>n3>>n4;
    a=(n1*2+n2*3+n3*4+n4*1)/10;
    cout<<fixed<<setprecision(1)<<"Media: "<<a<<endl;
    if(a==7.0||a>7.0){
        cout<<"Aluno aprovado."<<endl;
    }
    else if(a<5.0){
        cout<<"Aluno reprovado."<<endl;
    }
    else if(a>=5.0&&a<=6.9){
        cout<<"Aluno em exame."<<endl;
        cin>>b;
        cout<<fixed<<setprecision(1)<<"Nota do exame: "<<b<<endl;
        a=(a+b)/2;
        if(a==5.0||a>5.0){
            cout<<"Aluno aprovado."<<endl;
        }
        else if(a==4.9||a<4.9){
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<fixed<<setprecision(1)<<"Media final: "<<a<<endl;
    }
    return 0;
}
