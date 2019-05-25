#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    if(n%2==0){
        for(i=2;i<=n;i+=2){
            cout<<i<<"^2 = "<<i*i<<endl;
        }
    }
    else{
        for(i=2;i<n;i+=2){
            cout<<n<<"^2 = "<<n*n<<endl;
        }
    }
    return 0;
}
