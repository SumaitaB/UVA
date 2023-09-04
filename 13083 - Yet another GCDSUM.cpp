#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,n,p,q,s=0;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&n);
        s=0;
        for(p=1; p<=n; p++)
        {
            for(q=1; q<=n; q++)
            {
                if((n%p)==0 && (n%q)==0)
                {
                    s+=__gcd(p,q);
                }
            }
        }
        printf("Case %lld: %lld\n",i,s);
    }
        return 0;
    }
