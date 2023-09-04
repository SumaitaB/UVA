#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    long long int t,i,ans,n,m;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld",&n,&m);
        ans=(n/3)*(m/3);
        printf("%lld\n",ans);
    }
    return 0;
}
