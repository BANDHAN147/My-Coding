#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main(){

    double a,b,c,d,e,media;

    cin >> a >> b >> c >> d;

    media = (a*2 + b*3 + c*4 + d*1)/(10.0);
    cout<<fixed<<setprecision(1)<<"Media: "<<media<<endl;

    if(media >= 7.0)
            cout << "Aluno aprovado.\n";
    if(media < 5.0)
            cout << "Aluno reprovado.\n";
    if(media >= 5.0 && media < 7.0){
            cout << "Aluno em exame.\n";
            cin >> e;
            cout<<fixed<<setprecision(1)<<"Nota do exame: "<<e<<endl;
                         if((media + e)/2.0 >= 5.0)
                                  std::cout << "Aluno aprovado.\n";
                         else
                           std::cout << "Aluno reprovado.\n";
                         printf("Media final: %.1f\n", (media + e)/2.0);
            }
    return 0;
}
