#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,h,m,r,s;
    cin>>t;
    h=t/3600;
    r=t%3600;
    m=r/60;
    s=r%60;
    cout<<h<<":"<<m<<":"<<s<<endl;
    return 0;
}
