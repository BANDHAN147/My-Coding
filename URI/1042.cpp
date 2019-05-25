#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b){
        if(a<c){
            cout<<a<<endl;
            if(b<c){
                cout<<b<<endl;
                cout<<c<<endl<<endl;
            }
            else{
                cout<<c<<endl<<b<<endl<<endl;
            }
        }
        else{
            cout<<c<<endl<<a<<endl<<b<<endl<<endl;
        }
    }
    else{
        if(b<c){
            cout<<b<<endl;
            if(c<a){
                cout<<c<<endl<<a<<endl<<endl;
            }
            else{
                cout<<a<<endl<<c<<endl<<endl;
            }
        }
        else{
            cout<<c<<endl<<b<<endl<<a<<endl<<endl;
        }
    }
    cout<<a<<endl<<b<<endl<<c<<endl;
    return 0;
}
