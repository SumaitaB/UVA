#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    double s;
    while(cin>>n)
    {
        if(n==0)break;
        s=sqrt((n*(n+1))/3.00);
        cout<<fixed<<setprecision(6)<<s<<endl;
    }
    return 0;
}
