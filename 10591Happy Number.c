#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long long int n,i,p,t,s=0,r=0;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&n);
        if(n<=0)break;
        s=0,r=0;
        p=n;
            while(1)
            {
                s=0;
                while(p!=0)
                {
                    r=p%10;
                    s=s+(r*r);
                    p=p/10;
                }
                p=s;
                if(s/10==0)break;
            }

        if(s==1)
        {
            printf("Case #%lld: %lld is a Happy number.\n",i,n);
        }
        else
        {
            printf("Case #%lld: %lld is an Unhappy number.\n",i,n);
        }
    }

    return 0;
}
