#include<bits/stdc++.h>
using namespace std;
int main()
{

    double r,a,ans,x;
    long long int n,t;
    while(cin>>r>>n)
    {
        a=sin(((360.00/n*1.00)*(2*acos(0.0)))/180.00);
        ans=(1/2.00)*r*r*n*a;
        cout<<fixed<<setprecision(3)<<ans<<endl;
    }
    return 0;
}
