#include<stdio.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,a,b,j,cnt=0,s=0,r,p,flag,k,cn=0;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld%lld",&a,&b);
        flag=0;
        for(j=a; j<=b; j++)
        {
            cnt=0;
            p=j;
            s=0;
            cn=0;
            for(k=1; k<=j; k++)
            {
                if(j%k==0)
                {
                    cnt++;
                }
            }
            if(cnt==2)
            {
                while(p!=0)
                {
                    r=p%10;
                    s=s*10+r;
                    p=p/10;
                }
            }
            for(k=1; k<=s; k++)
            {
                if(s%k==0)
                {
                    cn++;
                }
            }
            if(cn==2)
            {
                flag++;
            }
        }
        printf("%lld\n",flag);
    }
    return 0;
}
